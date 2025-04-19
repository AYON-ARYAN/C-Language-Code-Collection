#include <stdio.h>

int main()
{
    int a, add = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Sum of all odd numbers from 1 to %d are:\n", a);

    for (int i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            add += i; 
        }
    }

    printf("\nSum of all odd numbers are: %d\n", add);

    return 0;
}
