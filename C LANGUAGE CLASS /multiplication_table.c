#include <stdio.h>


void printMultiplicationTable(int num, int multiplier) {
    if (multiplier > 10)
        return;

    printf("%d x %d = %d\n", num, multiplier, num * multiplier);


    printMultiplicationTable(num, multiplier + 1);
}

int main() {
    int num = 8;

    printf("Multiplication table of %d:\n", num);


    printMultiplicationTable(num, 1);

    return 0;
}
