#include <stdio.h>


int sumSeries(int n);

int main() {
    int n;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = sumSeries(n);

    printf("The sum of the series [9 + 99 + 999 + 9999 + ...] for %d terms is: %d\n", n, result);

    return 0;
}


int sumSeries(int n) {
    int sum = 0;
    int term = 9;
    int i = 1;

    do {


        sum += term;
        term = term * 10 + 9;
        i++;
    } while (i <= n);

    return sum;
}
