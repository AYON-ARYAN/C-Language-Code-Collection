#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    float salary;
    int hoursOfWork;
};

void increaseSalary(struct Employee *employee)
{
    if (employee->hoursOfWork >= 8 && employee->hoursOfWork < 10)
    {
        employee->salary += 50;
    }
    else if (employee->hoursOfWork >= 10 && employee->hoursOfWork < 12)
    {
        employee->salary += 100;
    }
    else if (employee->hoursOfWork >= 12)
    {
        employee->salary += 150;
    }
}

int main()
{
    const int numEmployees = 10;

    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i)
    {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Hours of Work per Day: ");
        scanf("%d", &employees[i].hoursOfWork);
    }

    for (int i = 0; i < numEmployees; ++i)
    {
        increaseSalary(&employees[i]);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; ++i)
    {
        printf("Name: %s, Final Salary: %.2f\n", employees[i].name, employees[i].salary);
    }

    return 0;
}
