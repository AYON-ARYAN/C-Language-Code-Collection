// wap to take two floating point numbers as input from user and print both the values

#include <stdio.h>

int main()
{
    float number1, number2;

    printf("Enter the first floating-point number: ");
    scanf("%f", &number1);

    printf("Enter the second floating-point number: ");
    scanf("%f", &number2);

    printf("You entered the following numbers:\n");
    printf("First Number: %f\n", number1);
    printf("Second Number: %f\n", number2);

    return 0;
}
