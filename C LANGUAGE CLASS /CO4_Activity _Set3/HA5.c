#include <stdio.h>

void sqr(int number);

int main() {
    int n, i = 1;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Perfect square roots up to %d: ", n);

    while (i * i <= n) {
        sqr(i);
        i++;
    }

    printf("\n");

    return 0;
}

void sqr(int number) {
    printf("%d ", number * number);
}
