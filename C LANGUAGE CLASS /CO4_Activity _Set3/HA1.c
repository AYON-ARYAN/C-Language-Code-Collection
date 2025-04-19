#include <stdio.h>

int no_swap(int number);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (no_swap(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

int no_swap(int number) {
    int Number = number;
    int rev = 0;
    int remainder;

    while (number > 0) {
        remainder = number % 10;
        rev = rev * 10 + remainder;
        number /= 10;
    }

    return Number == rev;
}


