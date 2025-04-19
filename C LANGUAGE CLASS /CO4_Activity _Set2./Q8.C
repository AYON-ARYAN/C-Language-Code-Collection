#include <stdio.h>

int main()
{
    int n, add = 0;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        if (i == 4 || i == 8)
        {
            continue;
        }


        if (i % 2 == 0)
        {
            add += i;
        }
    }

    printf("The sum of all even numbers between 1 and %d is: %d\n", n, add);

    return 0;
}
