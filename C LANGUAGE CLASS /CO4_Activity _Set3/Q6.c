#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the first number \n ");
    scanf("%d", &n1);

    printf("Enter the second number \n ");
    scanf("%d", &n2);

    int dividend, divisor, remainder;

    if (n1 > n2)
    {
        dividend = n1;
        divisor = n2;
    }
    else
    {
        dividend = n2;
        divisor = n1;
    }

    do
    {
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    } while (divisor != 0);

    int gcd = dividend;

    int hcf = (n1 * n2) / gcd;

    printf("Greatest Common Divisor \n %d\n", gcd);
    printf("Highest Common Factor  \n  %d\n", hcf);

    return 0;
}
