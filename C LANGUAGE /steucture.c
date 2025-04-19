#include <stdio.h>

struct employee {
    int id;
    char name[200];
    float salary;
};

int main() {
    int a;
    printf("Enter the number of employees you want: ");
    scanf("%d", &a);

    struct employee employees[a]; // Declare an array of structures based on user input

    for (int i = 0; i < a; i++) {
        printf("Enter the details of employee %d \n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name); // Read string with spaces
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("ID: ");
        scanf("%d", &employees[i].id);
    }

    // Displaying the details of all employees
    printf("\nEmployee details:\n");
    for (int i = 0; i < a; i++) {
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }

    return 0;
}
