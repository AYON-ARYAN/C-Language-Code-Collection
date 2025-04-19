#include <stdio.h>


int factorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * factorial(num - 1);
}


int is_prime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


int is_even(int num) {
    return (num % 2 == 0);
}

int main() {
    char choice;
    int num;

    while (1) {
        printf("Menu:\n");
        printf("a. Factorial of a number\n");
        printf("b. Prime or not\n");
        printf("c. Odd or even\n");
        printf("d. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is %d\n", num, factorial(num));
                break;
            case 'b':
                printf("Enter a number: ");
                scanf("%d", &num);
                if (is_prime(num))
                    printf("%d is a prime number\n", num);
                else
                    printf("%d is not a prime number\n", num);
                break;
            case 'c':
                printf("Enter a number: ");
                scanf("%d", &num);
                if (is_even(num))
                    printf("%d is even\n", num);
                else
                    printf("%d is odd\n", num);
                break;
            case 'd':
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option (a, b, c, or d).\n");
        }
    }

    return 0;
}
