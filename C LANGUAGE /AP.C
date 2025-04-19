#include <stdio.h>

int main() {
    int a, d, n;
    double sum;

    printf("Enter the first term : ");
    scanf("%d", &a);
    
    printf("Enter the common difference : ");
    scanf("%d", &d);
    
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    printf("Arithmetic Progression: ");
    sum = 0;

    for (int i = 0; i < n; i++) {
        int term = a + i * d;
        sum += term;
        printf("%d", term);
        
        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\nSum of the Arithmetic Progression: %.2lf\n", sum);

    return 0;
}
