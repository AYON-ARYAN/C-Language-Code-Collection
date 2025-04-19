#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("Number %d is divisible by:\t", i);
        
        if (i % 2 == 0) {
            printf("2 ");
        }

        if (i % 3 == 0) {
            printf("3 ");
        }

        if (i % 5 == 0) {
            printf("5 ");
        }

        printf("\n");
    }

    return 0;
}
