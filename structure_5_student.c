#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];

    for(int i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);   // name char array hai, & nahi lagega

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Printing data
    printf("\n----- Student Details -----\n");
    for(int i = 0; i < 5; i++) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }

    return 0;
}

