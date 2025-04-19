#include <stdio.h>


int divisibility(int start, int end);

int main() {
    int start = 100;
    int end = 200;
    
    int sum = divisibility(start, end);

    printf("Sum of integers between %d and %d divisible by 9 is: %d\n", start, end, sum);

    return 0;
}


int divisibility(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        if (i % 9 == 0) {
            sum += i;
        }
    }
    return sum;
}
