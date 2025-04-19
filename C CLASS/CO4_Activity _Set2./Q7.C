#include <stdio.h>

int main() {
    int add = 0;
    int q;

    do {
        printf("Enter a number: ");
        scanf("%d", &q);

        if (q >= 0) {
            add += q;  
        }
    } while (q >= 0);

    printf("Sum of all non-negative numbers entered: %d\n", add);

    return 0;
}
