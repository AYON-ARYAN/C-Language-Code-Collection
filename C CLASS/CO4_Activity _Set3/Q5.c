#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    
    int n1 = 0, n2 = 1, zz, sum = 0;
    int i = 1;
    
    printf("Fibonacci Series for the first %d numbers: ", n);
    
    do {
        printf("%d, ", n1);
        sum += n1;
        
        zz = n1 + n2;
        n1 = n2;
        n2 = zz;
        
        i++;
    } while (i <= n);
    
    printf("\nSum of the first %d terms of the Fibonacci series: %d\n\n", n, sum);
    
    return 0;
}
