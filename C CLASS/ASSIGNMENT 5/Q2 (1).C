#include <stdio.h>

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
    if (num2 != 0)
    {
        return num1 / num2;
    }
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0.0;
    }
}

int main()
{
    float num1, num2, result;
    char operator;
    int continueCalculation = 1;

    do
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        printf("Select an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("Enter the operation number: ");
        scanf(" %c", &operator);

        switch (operator)
        {
        case '1':
            result = add(num1, num2);
            break;
        case '2':
            result = subtract(num1, num2);
            break;
        case '3':
            result = multiply(num1, num2);
            break;
        case '4':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator.\n");
            continue;
        }

        printf("Result: %.2f\n", result);

        printf("Do you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &continueCalculation);
    } while (continueCalculation);

    return 0;
}
