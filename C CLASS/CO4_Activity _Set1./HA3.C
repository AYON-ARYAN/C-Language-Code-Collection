#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 10) {
        printf("Number must have at least two digits.\n");
        return 1;
    }

   
    lastDigit = number % 10;


    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;


    sum = firstDigit + lastDigit;

    printf("Sum of the first and last digit: %d\n", sum);

    return 0;
}
