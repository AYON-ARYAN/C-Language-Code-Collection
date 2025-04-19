#include <stdio.h>


void FIBB(int n);

int main() {
    int n;


    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);


    printf("Fibonacci series for the first %d terms:\n", n);

    FIBB(n);

    return 0;
}


void FIBB(int n) {
    int term1 = 0, term2 = 1, nextTerm;
    int i = 0;

    do {
        if (i <= 1) {
            nextTerm = i;
        } else {
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
        }

        printf("%d ", nextTerm);

        i++;
    } while (i < n);
    printf("\n");
}
