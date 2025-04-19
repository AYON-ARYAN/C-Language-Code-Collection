#include <stdio.h>

int main()
{
    int arreven[14] = {2, 4, 6, 8, 10};
    int arrodd[14] = {1, 3, 5, 7, 9};
    int a, c;

    printf("How many digits do you want to add to the array: ");
    scanf("%d", &a);

    printf("Enter the numbers you want to add to the arrays:\n");

    if (a % 2 == 0)
    {
        for (int i = 0; i < a; i++)
        {
            printf("Enter even number %d: ", i + 11);
            scanf("%d", &arreven[i + 5]); //5 the index of the number after which you want to add numbers
        }
    }
    else
    {
        for (int j = 0; j < a; j++)
        {
            printf("Enter odd number %d: ", j + 1);
            scanf("%d", &arrodd[j + 5]); 
        }
    }

    printf("\nUpdated even array: ");
    for (int i = 0; i < 14; i++)
    {
        printf("%d ", arreven[i]);
    }

    printf("\nUpdated odd array: ");
    for (int i = 0; i < 14; i++)
    {
        printf("%d ", arrodd[i]);
    }

    return 0;
}
