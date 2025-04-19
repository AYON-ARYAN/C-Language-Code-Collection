#include <stdio.h>

int main()
{
    int n, c = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 1)
        {
            c += i;
        }
        i++;
    }

    printf("The sum of the first %d natural odd numbers is %d\n", n, c);

    return 0;
}
