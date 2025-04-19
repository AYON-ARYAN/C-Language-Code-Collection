#include <stdio.h>

int factorial(int x);

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int ans = factorial(num);
    printf("The factorial of %d is %d\n", num, ans);

    return 0;
}

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
