
#include <stdio.h>

int sum(int b);

int main()
{
    int b;
    printf("Enter an integer: ");
    scanf("%d", &b);

    

    printf("The sum of all numbers from 1 to %d is %d\n", b, sum(b));

    return 0;
}

int sum(int b)
{
    int c = 0;
    for (int i = 1; i <= b; i++)
    {
        c += i;
    }
    return c;
}
