#include <stdio.h>

struct Report
{
    char name[25];
    char subject_1[20];
    char subject_2[20];
    char subject_3[20];
    int average_marks;
};

struct Report reports[100];

int numStudents;

void input();
void display();

int main()
{
    input();
    display();
    return 0;
}

void input()
{
    printf("How many students' data do you want to enter? ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", reports[i].name);
        
        printf("Subject 1: ");
        scanf("%s", reports[i].subject_1);

        printf("Subject 2: ");
        scanf("%s", reports[i].subject_2);

        printf("Subject 3: ");
        scanf("%s", reports[i].subject_3);

        printf("Average marks: ");
        scanf("%d", &reports[i].average_marks);
    }
}

void display()
{
    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; i++)
    {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", reports[i].name);
        printf("Subject 1: %s\n", reports[i].subject_1);
        printf("Subject 2: %s\n", reports[i].subject_2);
        printf("Subject 3: %s\n", reports[i].subject_3);
        printf("Average Marks: %d\n", reports[i].average_marks);
    }
}
