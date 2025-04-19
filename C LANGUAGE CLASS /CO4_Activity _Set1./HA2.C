#include <stdio.h>
#include <math.h>

int main()
{
    int number, firstDigit, lastDigit, temp, numOfDigits = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 10)
    {
        printf("Number must have at least two digits.\n");
        return 1;
    }

    temp = number;

    while (temp > 0)
    {
        temp /= 10;
        numOfDigits++;
    }

    temp = number;

    lastDigit = temp % 10;

    temp /= 10;

    while (temp >= 10)
    {
        temp /= 10;
    }
    firstDigit = temp;

    int swappedNumber = lastDigit * pow(10, numOfDigits - 1) + (number % (int)pow(10, numOfDigits - 1) / 10) * 10 + firstDigit;

    printf("Swapped number: %d\n", swappedNumber);

    return 0;
}
