#include <stdio.h>


int sum(int n);

int main() {
    int n;


    printf("Enter the value of n: ");
    scanf("%d", &n);

    

    int result = sum(n);

    printf("The sum of the first %d natural odd numbers is: %d\n", n, result);

    return 0;
}


int sum(int n) {
    int sum = 0;
    int number = 1;
    int count = 0;

    do {
        if (number % 2 != 0) {
            sum += number;
            count++;
        }
        number++;
    } while (count < n);

    return sum;
}
