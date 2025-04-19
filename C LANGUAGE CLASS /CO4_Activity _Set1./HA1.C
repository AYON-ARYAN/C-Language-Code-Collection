#include <stdio.h>
#include<math.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Every prime numbers less than %d are:\n", n);

    int sum = 0; 

    for (int i = 2; i < n; i++) {
        int yes = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                yes = 0;
                break;
            }
        }

        if (yes) {
            printf("%d\n", i);
            sum += i; 
        }
    }

    printf("Sum of prime numbers: %d\n", sum);

    return 0;
}
