#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    int bitwiseAND = n1 & n2;
    int bitwiseOR = n1 | n2;
    int bitwiseXOR = n1 ^ n2;
    int bitwiseLeftShift = n1 << 1;
    int bitwiseRightShift = n2 >> 1;

    int bitwiseNOTNum1 = ~n1;
    int bitwiseNOTNum2 = ~n2;

    printf("Binary AND: %d\n", bitwiseAND);
    printf("Binary OR: %d\n", bitwiseOR);
    printf("Binary XOR: %d\n", bitwiseXOR);
    printf("Binary Left Shift: %d\n", bitwiseLeftShift);
    printf("Binary Right Shift: %d\n", bitwiseRightShift);
    printf("Unary NOT (on num1): %d\n", bitwiseNOTNum1);
    printf("Unary NOT (on num2): %d\n", bitwiseNOTNum2);

    return 0;
}
