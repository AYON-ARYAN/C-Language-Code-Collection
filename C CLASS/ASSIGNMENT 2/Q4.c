#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, s_i;

    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest (as a decimal): ");
    scanf("%f", &r);

    printf("Enter the time period (in years): ");
    scanf("%f", &t);

    s_i = (p * r * t);

    printf("Simple Interest: %f\n", s_i);

    return 0;
}