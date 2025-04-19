#include <stdio.h>

struct my_structure {
    char name[20];
    int number;
    int rank;
};

int main() {
    struct my_structure people[3];

    for (int i = 0; i < 3; ++i) {
        printf("Enter details for person %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", people[i].name);

        printf("Enter number: ");
        scanf("%d", &people[i].number);

        printf("Enter rank: ");
        scanf("%d", &people[i].rank);
    }

    for (int i = 0; i < 3; ++i) {
        printf("\nDetails for person %d:\n", i + 1);
        printf("NAME: %s\n", people[i].name);
        printf("NUMBER: %d\n", people[i].number);
        printf("RANK: %d\n", people[i].rank);
    }

    printf("Which record do you want? Enter a number between 1 and 3: ");
    int t;
    scanf("%d", &t);

    switch (t) {
        case 1:
            printf("NAME: %s\n", people[0].name);
            printf("NUMBER: %d\n", people[0].number);
            printf("RANK: %d\n", people[0].rank);
            break;
        case 2:
            printf("NAME: %s\n", people[1].name);
            printf("NUMBER: %d\n", people[1].number);
            printf("RANK: %d\n", people[1].rank);
            break;
        case 3:
            printf("NAME: %s\n", people[2].name);
            printf("NUMBER: %d\n", people[2].number);
            printf("RANK: %d\n", people[2].rank);
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 3.\n");
            break;
    }

    return 0;
}
