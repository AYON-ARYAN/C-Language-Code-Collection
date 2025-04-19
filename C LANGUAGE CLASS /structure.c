#include <stdio.h>

struct Student
{
    int booknumber;
    char name[50];
    int year;
    char author[100];
};

void printNamesByAge(struct Student students[], int n, int targetAge)
{
    printf("\nStudents with age %d:\n", targetAge);
    for (int i = 0; i < n; ++i)
    {
        if (students[i].year == targetAge)
        {
            printf("%s\n", students[i].name);
        }
    }
}

void printNamesByEvenRoll(struct Student students[], int n)
{
    printf("\nBooks  with even Serial numbers:\n");
    for (int i = 0; i < n; ++i)
    {
        if (students[i].booknumber % 2 == 0)
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
        if (students[i].booknumber == targetRoll)
        {
            printf("\nDetails of the Book with Serial Number %d:\n", targetRoll);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].booknumber);
            printf("Address: %s\n", students[i].author);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\nBook  with Serial Number %d not found.\n", targetRoll);
    }
}

int main()
{
    int n;

    printf("Enter the number of Books: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; ++i)
    {
        printf("\nEnter details for Books %d:\n", i + 1);
        printf("Serial Number: ");
        scanf("%d", &students[i].booknumber);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Year: ");
        scanf("%d", &students[i].year);

        printf("Author: ");
        scanf("%s", students[i].author);
    }

    printNamesByAge(students, n, 14);
    printNamesByEvenRoll(students, n);

    int targetRoll;
    printf("\nEnter the serial number to display details: ");
    scanf("%d", &targetRoll);
    displayStudentDetails(students, n, targetRoll);

    return 0;
}
