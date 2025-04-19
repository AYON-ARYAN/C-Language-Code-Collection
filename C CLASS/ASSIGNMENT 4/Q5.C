#include <stdio.h>

int main() {
    int n1, n2, ANS;

    
    printf("Enter the first integer: ");
    scanf("%d", &n1);

    printf("Enter the second integer: ");
    scanf("%d", &n2);

  
    ANS = n1 | n2;

    
    printf("Bitwise OR result: %d\n", ANS);

    return 0;
}
