#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = 0;

    printf("Prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        int yes = 1; 


        for (int j = 2; j * j <= i && yes; j++) {
            if (i % j == 0) {
                yes = 0; 
            }
        }

        if (yes) {
            printf("Prime numbers %d \n", i);
            sum += i;
        }
    }

    printf("\nSum of prime numbers up to %d is: %d\n", n, sum);

    return 0;
}
