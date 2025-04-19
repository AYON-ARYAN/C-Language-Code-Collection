#include <stdio.h>


int calculation(int number);

int main() {
    int num;


    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    int factorial = calculation(num);

    printf("The factorial of %d is %d\n", num, factorial);

    return 0;
}


int calculation(int number) {
    int factorial = 1;
    int i = 1;

    do {
        factorial *= i;
        i++;
    } while (i <= number);

    return factorial;
}
