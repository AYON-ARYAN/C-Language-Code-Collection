#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the recursive function
    int result = factorial(num);

    printf("Factorial of %d is: %d\n", num, result);

    return 0;
}
