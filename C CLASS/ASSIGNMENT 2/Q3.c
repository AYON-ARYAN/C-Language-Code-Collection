#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;

    printf("Enter the first number:");
    scanf("%f", &a);

    printf("Enter the second number:");
    scanf("%f", &b);

    printf("The quotient of the code is %f:", a / b);
    printf("The reminder of a and b is %f:",a % b);
    return 0;
}

// you cannot get the remainder of float functions