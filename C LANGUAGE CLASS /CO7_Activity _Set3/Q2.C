#include <stdio.h>

void input(int *a, int *b) {
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
}

void compare(int a, int b, int c, int *largest) {
    if (a > b && a > c) {
        *largest = a;
    } else if (b > a && b > c) {
        *largest = b;
    } else {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest) {
    printf("\nThe maximum value is %d.", largest);
}

int main() {
    int a, b, c, largest;

    input(&a, &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    compare(a, b, c, &largest);

    output(a, b, c, largest);

    return 0;
}
