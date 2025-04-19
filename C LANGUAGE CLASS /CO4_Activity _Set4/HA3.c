#include <stdio.h>


void calculation(int n);

int main() {
    int n;


    printf("Enter the number of terms: ");
    scanf("%d", &n);



    calculation(n);

    return 0;
}


void calculation(int n) {
    int i = 1;
    int sum = 0;

    do {
        int square = i * i;
        sum += square;

        if (i != 1) {
            printf(" + ");
        }

        printf("%d", square);

        i++;
    } while (i <= n);

    printf(" = %d\n", sum);
}
