#include <stdio.h>
#include <math.h>

float add(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    if (num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
    return num1 / num2;
}

int main()
{
    char operator[2];
    float num1, num2, result;

    printf("Enter two numbers and an operator (+, -, *, /) separated by spaces: ");
    scanf("%f %1s %f", &num1, operator, & num2);

    switch (operator[0])
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    default:
        printf("Invalid operator. Please use +, -, *, or /.\n");
        return 1;
    }

    printf("Result: %.2f\n", result);

    return 0;
}
