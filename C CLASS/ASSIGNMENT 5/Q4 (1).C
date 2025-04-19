#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float x, y;
    
    printf("Enter x:\t");
    scanf("%f", &x);
    printf("Enter n:\t");
    scanf("%d", &n);
    
    switch (n) {
        case 1:
            y = 1 + x;
            printf("y: %f\n", y);
            break;
        case 2:
            y = 1 + (x / n);
            printf("y: %f\n", y);
            break;
        case 3:
            y = 1 + pow(x, n);
            printf("y: %f\n", y);
            break;
        default:
            y = 1 + n * x;
            printf("y: %f\n", y);
    }

    return 0;
}
