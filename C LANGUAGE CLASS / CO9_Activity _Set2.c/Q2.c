#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[50];
    int age;
    char address[100];
};

void printNamesByAge(struct Student students[], int n, int targetAge)
{
    printf("\nStudents with age %d:\n", targetAge);
    for (int i = 0; i < n; ++i)
    {
        if (students[i].age == targetAge)
        {
            printf("%s\n", students[i].name);
        }
    }
}

void printNamesByEvenRoll(struct Student students[], int n)
{
    printf("\nStudents with even roll numbers:\n");
    for (int i = 0; i < n; ++i)
    {
        if (students[i].rollNumber % 2 == 0)
        {
            printf("%s\n", students[i].name);
        }
    }
}

void displayStudentDetails(struct Student students[], int n, int targetRoll)
{
    int found = 0;
    for (int i = 0; i < n; ++i)
    {
        if (students[i].rollNumber == targetRoll)
        {
            printf("\nDetails of the student with Roll Number %d:\n", targetRoll);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Address: %s\n", students[i].address);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nStudent with Roll Number %d not found.\n", targetRoll);
    }
}

int main()
{
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Address: ");
        scanf("%s", students[i].address);
    }

    printNamesByAge(students, n, 14);
    printNamesByEvenRoll(students, n);

    int targetRoll;
    printf("\nEnter the roll number to display details: ");
    scanf("%d", &targetRoll);
    displayStudentDetails(students, n, targetRoll);

    return 0;
}
