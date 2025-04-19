#include <stdio.h>
#include<math.h>

int main() {
    int i = 0, n, fa = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        fa *= i;
    }
    
    printf("The value of factorial %d is %d\n", n, fa);

    return 0;
}
