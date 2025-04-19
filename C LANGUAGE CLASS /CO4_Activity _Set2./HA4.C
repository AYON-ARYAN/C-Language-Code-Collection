#include <stdio.h>

int main() {
    int n;
    float add = 0.0;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    

    printf("Harmonic Series for %d terms:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i != 1) {
            printf(" + ");
        }
        printf("1/%d", i);
        add += 1.0 / i;
    }

    printf("\nSum of the first %d terms: %f\n", n, add);

    return 0;
}
