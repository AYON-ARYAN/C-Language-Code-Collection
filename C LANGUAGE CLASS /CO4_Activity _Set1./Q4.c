#include <stdio.h>

int main()
{
    int ayon, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &ayon);

    for (int i = 1; ayon > 0; i += 2, ayon--)
    {
        sum += i;
    }

    printf("The sum of the first %d natural odd numbers is: %d\n", ayon, sum);

    return 0;
}
