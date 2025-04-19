#include <stdio.h>

int main() {
    int n;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    printf("Pascal's Triangle for %d rows:\n", n);

    for (int i = 0; i < n; i++) {
        int number = 1;


        for (int bar = 1; bar <= n - i; bar++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            if (j > 0) {
                no = no * (i - j + 1) / j;
            }
            printf("%4d", no);
        }

        printf("\n");
    }

    return 0;
}
