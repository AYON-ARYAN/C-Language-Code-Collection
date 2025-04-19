#include <stdio.h>

typedef struct
{
    char part1[50];
    char part2[50];
    float price;
} MyComputer;

void displayMe(MyComputer computer)
{
    printf("Part 1: %s\n", computer.part1);
    printf("Part 2: %s\n", computer.part2);
    printf("Price: $%.2f\n", computer.price);
}

int main()
{
    int n;
    printf("Enter the number of computers: ");
    scanf("%d", &n);

    MyComputer computers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for computer #%d\n", i + 1);
        printf("Part 1: ");
        scanf("%s", computers[i].part1);
        printf("Part 2: ");
        scanf("%s", computers[i].part2);
        printf("Price: $");
        scanf("%f", &computers[i].price);
    }

    for (int i = 0; i < n; i++)
    {
        displayMe(computers[i]);
        printf("\n");
    }

    return 0;
}
