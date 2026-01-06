#include <mysql/mysql.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

MYSQL *conn;

struct emp {
    int emp_id;
    char emp_name[50];
    char dob[11];
    int age;
    float salary;
    float comm;
    int dept_id;
    int manager_id;
    int location_id;
};



int get_int(const char *msg)
{
    char buf[20];
    int value;

    while (1)
    {
        printf("%s", msg);
        if (fgets(buf, sizeof(buf), stdin))
        {
            if (sscanf(buf, "%d", &value) == 1)
                return value;
            else
                printf("Invalid number. Try again.\n");
        }
    }
}


float get_float(const char *prompt) {
    char buffer[100];
    float value;
    char *endptr;

    printf("%s", prompt);
    fflush(stdout);

    while (1) {
        if (!fgets(buffer, sizeof(buffer), stdin))
            continue;

        /* Ignore empty lines silently */
        if (buffer[0] == '\n')
            continue;

        value = strtof(buffer, &endptr);

        if (endptr == buffer || (*endptr != '\n' && *endptr != '\0')) {
            printf("Invalid decimal value. Try again.\n");
            printf("%s", prompt);
            fflush(stdout);
            continue;
        }

        return value;
    }
}




void get_string(const char *msg, char *str, int size)
{
    printf("%s", msg);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = 0;
}


void connect_db()
{
    conn = mysql_init(NULL);

    if (!mysql_real_connect(conn,
            "localhost",      // host
            "payal",          // MySQL user
            "Password",       // MySQL password
            "employees",       // database name
            0, NULL, 0))
    {
        printf("Database connection failed: %s\n", mysql_error(conn));
        exit(1);
    }
}



int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int isValidDate(int d, int m, int y) {
    if (y < 1900 || y > 2100)
        return 0;

    if (m < 1 || m > 12)
        return 0;

    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if (m == 2 && isLeapYear(y))
        daysInMonth[1] = 29;

    if (d < 1 || d > daysInMonth[m - 1])
        return 0;

    return 1;
}

int isFutureDate(int d, int m, int y) {
    time_t t = time(NULL);
    struct tm *today = localtime(&t);

    if (y > today->tm_year + 1900) return 1;
    if (y == today->tm_year + 1900 && m > today->tm_mon + 1) return 1;
    if (y == today->tm_year + 1900 && m == today->tm_mon + 1 && d > today->tm_mday) return 1;

    return 0;
}

int validateDOB(const char *dob) {
    int d, m, y;

    /* Strict format check dd-mm-yyyy */
    if (sscanf(dob, "%2d-%2d-%4d", &d, &m, &y) != 3)
        return 0;

    if (!isValidDate(d, m, y))
        return 0;

    if (isFutureDate(d, m, y))
        return 0;

    return 1;
}

int calculateAge(int d, int m, int y) 
{
    time_t t = time(NULL);
    struct tm *today = localtime(&t);

    int age = (today->tm_year + 1900) - y;

    if (m > (today->tm_mon + 1) ||
       (m == (today->tm_mon + 1) && d > today->tm_mday))
    {
        age--;
    }

    return age;
}


int department_exists(int dept_id)
{
    char query[128];
    MYSQL_RES *res;

    sprintf(query,
            "SELECT dept_id FROM department WHERE dept_id=%d",
            dept_id);

    if (mysql_query(conn, query))
        return 0;

    res = mysql_store_result(conn);

    if (mysql_num_rows(res) > 0)
    {
        mysql_free_result(res);
        return 1;
    }

    mysql_free_result(res);
    return 0;
}


int location_exists(int location_id)
{
    char query[128];
    MYSQL_RES *res;

    sprintf(query,
            "SELECT location_id FROM location WHERE location_id=%d",
            location_id);

    if (mysql_query(conn, query))
        return 0;

    res = mysql_store_result(conn);

    if (mysql_num_rows(res) > 0)
    {
        mysql_free_result(res);
        return 1;
    }

    mysql_free_result(res);
    return 0;
}


int get_manager_id_by_location(int location_id) {
    switch(location_id) 
    {
        case 1: return 21;  // Delhi
        case 2: return 22;  // Mumbai
        case 3: return 23;  // Bangalore
	case 4: return 23;  // Nagpur
	case 5: return 22;  // Pune
        default: return 0;  // Unknown
    }
}


void print_result(MYSQL_RES *res) {
    MYSQL_ROW row;
    MYSQL_FIELD *field;
    unsigned int num_fields = mysql_num_fields(res);

    // Print column names
    while ((field = mysql_fetch_field(res))) {
        printf("%-20s", field->name);
    }
    printf("\n");

    // Print rows
    while ((row = mysql_fetch_row(res))) {
        for (int i = 0; i < num_fields; i++) {
            printf("%-20s", row[i] ? row[i] : "NULL");
        }
        printf("\n");
    }
}




// ------------- Create Records --------------//

   void create_record(struct emp e)
{
    char query[512];

    sprintf(query,
        "INSERT INTO emp_info "
        "(emp_name, dob, age,salary, comm, dept_id, manager_id, location_id) "
        "VALUES('%s', '%s', %d, %.2f, %.2f, %d, %d, %d)",
        e.emp_name, e.dob, e.age, e.salary, e.comm,
        e.dept_id, e.manager_id, e.location_id);

    if (mysql_query(conn, query))
        printf("Insert failed: %s\n", mysql_error(conn));
    else
        printf("Record inserted successfully\n");
}
 


// -------------- Display Records ------------//


void display_records()
{
    MYSQL_RES *res;
    MYSQL_ROW row;

    const char *query =
        "SELECT emp_id, emp_name, age, salary, dept_id, manager_id, location_id "
        "FROM emp_info WHERE is_deleted = 0";

    if (mysql_query(conn, query))
    {
        printf("Query failed: %s\n", mysql_error(conn));
        return;
    }

    res = mysql_store_result(conn);

    if (res == NULL)
    {
        printf("No result set returned.\n");
        return;
    }

    if (mysql_num_rows(res) == 0)
    {
        printf("⚠️ No records found.\n");
        mysql_free_result(res);
        return;
    }

    
	    printf("emp_id\tName\t\tage\tsalary\tdepartment\tmanager\tlocation\n");
	    printf("-------------------------------------------------------------------\n");
    while ((row = mysql_fetch_row(res)))
    {
	    printf("%-4s %-20s %-4s %-8s %-14s %-8s %-10s\n",
               row[0] ? row[0] : "NULL",
               row[1] ? row[1] : "NULL",
               row[2] ? row[2] : "NULL",
               row[3] ? row[3] : "NULL",
               row[4] ? row[4] : "NULL",
               row[5] ? row[5] : "NULL",
               row[6] ? row[6] : "NULL");
    }

    mysql_free_result(res);
}



// ---------------- View Records ------------//

void view_record(int id)
{
    char query[256];
    MYSQL_RES *res;
    MYSQL_ROW row;

    sprintf(query,
        "SELECT * FROM emp_info WHERE emp_id=%d AND is_deleted=0", id);

    mysql_query(conn, query);
    res = mysql_store_result(conn);

    if ((row = mysql_fetch_row(res)))
    {
        printf("ID: %s\nName: %s\nAge: %s\nSalary: %s\n",
               row[0], row[1], row[3], row[4]);
    }
    else
    {
        printf("Record not found\n");
    }

    mysql_free_result(res);
}


//-------------- Update Salary ------------//

void update_salary(int id, float salary)
{
    char query[256];

    sprintf(query,
        "UPDATE emp_info SET salary=%.2f WHERE emp_id=%d", salary, id);

    mysql_query(conn, query);
    printf("Record updated\n");
}

//------------- Delete Record -----------//

void delete_record(int id)
{
    char query[128];

    sprintf(query,
        "UPDATE emp_info SET is_deleted=1 WHERE emp_id=%d", id);

    mysql_query(conn, query);
    printf("Record deleted\n");
}


// --------------- Main Menu -------------//

int main()
{
    int choice, id;
    struct emp e;
    MYSQL_RES *res;

    connect_db();

    while (1)
    {
        printf("\n1.Create\n2.Display\n3.View\n4.Update Salary\n5.Delete\n6.Exit\n");
        scanf("%d", &choice);
	getchar();

        switch (choice)
        {
        case 1:
		struct emp e;
		char dob[11];
    		int d, m, y;

    		get_string("Name: ", e.emp_name, sizeof(e.emp_name));

			/* Take DOB */
    		get_string("DOB (dd-mm-yyyy): ", dob, sizeof(dob));

    			/* Parse DOB */
    		if (sscanf(dob, "%2d-%2d-%4d", &d, &m, &y) != 3) 
		{
        		printf("Invalid DOB format. Use dd-mm-yyyy\n");
        		break;
    		}

    			/* Validate DOB (reuse your function) */
    		if (!validateDOB(dob))
		{
        		printf("Invalid DOB. Please enter a realistic date.\n");
        		break;
    		}

    		/* Calculate age internally */
    		e.age = calculateAge(d, m, y);

    		if (e.age < 18) 
		{
        		printf("Employee must be at least 18 years old.\n");
        		break;
    		}

	        sprintf(e.dob, "%04d-%02d-%02d", y, m, d);

    		e.salary = get_float("Salary: ");
	    	e.comm = get_float("Commission: ");
		
		printf("Available Departments:\n");
		mysql_query(conn, "SELECT dept_id, dept_name FROM department");
    		res = mysql_store_result(conn);
		if (res) 
		{
    			print_result(res);
    			mysql_free_result(res);
		}
		e.dept_id = get_int("Dept ID: ");
	    	
		printf("Available Locations:\n");
		mysql_query(conn, "SELECT location_id, city FROM location");
		res = mysql_store_result(conn);
		if (res) 
		{
    			print_result(res);
    			mysql_free_result(res);
		}
		e.location_id = get_int("Location ID: ");

    		e.manager_id = get_manager_id_by_location(e.location_id);
		printf("Manager ID automatically set to %d based on Location\n", e.manager_id);
	    	create_record(e);
		break;

        case 2:
            display_records();
            break;

        case 3:
            printf("Enter ID: ");
            scanf("%d", &id);
            view_record(id);
            break;

        case 4:
            printf("Enter ID: ");
            scanf("%d", &id);
            printf("New Salary: ");
            scanf("%f", &e.salary);
            update_salary(id, e.salary);
            break;

        case 5:
            printf("Enter ID: ");
            scanf("%d", &id);
            delete_record(id);
            break;

        case 6:
            mysql_close(conn);
            exit(0);
        }
    }
}

