#include <stdio.h>

void input(int *a);
void factorial(int a, int *c);
void output(int a, int result);

int main()
{
    int a, b;
    input(&a);
    factorial(a, &b);
    output(a, b);
    return 0;
}

void input(int *a)
{
    printf("Enter the number you want to get factorial of: ");
    scanf("%d", a);
}

void factorial(int a, int *c)
{
    *c = 1;
    for (int i = 1; i <= a; i++)
    {
        *c *= i;
    }
}

void output(int a, int result)
{
    printf("\nThe factorial of %d is: %d\n", a, result);
}
