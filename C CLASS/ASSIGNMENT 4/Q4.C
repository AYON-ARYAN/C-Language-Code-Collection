#include <stdio.h>

int main() {
    int n1, n2, ans;

    
    printf("Enter the first integer: ");
    scanf("%d", &n1);

    printf("Enter the second integer: ");
    scanf("%d", &n2);

    
    ans = n1 & n2;

    
    printf("Bitwise AND result: %d\n", ans);

    return 0;
}
