// #include <stdio.h>

// struct report_card_structures
// {
//     char subject_name[30];
//     int marks;
// };

// // Function prototype
// void input(struct report_card_structures *subject);

// int main() {
//     // Declare a variable of the structure type
//     struct report_card_structures subject;

//     // Call the input function
//     input(&subject);

//     printf("Subject Name: %s\n", subject.subject_name);
//     printf("Marks: %d\n", subject.marks);

//     return 0;
// }

// void input(struct report_card_structures *subject) {
//     // input for subject_name
//     printf("Enter the subject name: ");
//     scanf("%s", subject->subject_name);
// -> is used to access the members of the structure through this pointer.
//     // input for marks
//     printf("Enter the marks scored: ");
//     scanf("%d", &subject->marks);
// }
#include <stdio.h>

struct report_card_structures
{
    char subject_name[30];
    int marks;
};

void input(struct report_card_structures *subjects, int num_subjects);

int main()
{

    struct report_card_structures subjects[3];

    input(subjects, 3);

    for (int i = 0; i < 3; ++i)
    {
        printf("Subject Name: %s\n", subjects[i].subject_name);
        printf("Marks: %d\n", subjects[i].marks);
        printf("\n");
    }

    return 0;
}

void input(struct report_card_structures *subjects, int num_subjects)
{
    for (int i = 0; i < num_subjects; ++i)
    {

        printf("Enter the subject name for Subject %d: ", i + 1);
        scanf("%s", subjects[i].subject_name);

        printf("Enter the marks scored for Subject %d: ", i + 1);
        scanf("%d", &subjects[i].marks);
    }
}
