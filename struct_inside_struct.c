#include <stdio.h>
#include <string.h>

struct Address {
    char city[30];
    char state[30];
    int pincode;
};

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float percentage;
    struct Address addr;
};

int main() {
    struct Student s[5];
    int i, j;

    // Input
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("City: ");
        scanf("%s", s[i].addr.city);

        printf("State: ");
        scanf("%s", s[i].addr.state);

        printf("Pincode: ");
        scanf("%d", &s[i].addr.pincode);

        // Subject marks
        float total = 0;
        printf("Enter marks of 3 subjects:\n");
        for(j = 0; j < 3; j++) {
            printf("Subject %d: ", j+1);
            scanf("%f", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        // Calculate %
        s[i].percentage = total / 3.0;
    }


      printf("\n----- Student Details -----\n");
    for(i = 0; i < 5; i++) {
        printf("\nRoll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Address: %s, %s - %d\n",
               s[i].addr.city, s[i].addr.state, s[i].addr.pincode);
        printf("Percentage: %.2f\n", s[i].percentage);
    }
    return 0;
}

