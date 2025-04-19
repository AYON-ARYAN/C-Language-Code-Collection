#include <stdio.h>

int a, b, c;
int *p = &a;

// Input using call by reference
void input()
{
    printf("Enter the value of a: ");
    scanf("%d", p);
}

// Factorial using recurtion
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

// Output using call by value
void output()
{
    printf("\nThe factorial of %d is: %d\n", a, factorial(*p));
}

int main()
{
    input();
    output();

    return 0;
}
