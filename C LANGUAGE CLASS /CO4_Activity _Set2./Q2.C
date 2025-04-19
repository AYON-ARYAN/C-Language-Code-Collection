#include <stdio.h>

int main() {
    int n, tnt = 0;


    printf("Enter a number: ");
    scanf("%d", &n);

  

        while (n > 0) {
            tnt++;
            n /= 10;
        }
    

    printf("Number of digits: %d\n", tnt);

    return 0;
}
