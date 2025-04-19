#include <stdio.h>

int main() {
    int a = 10;
    int b = 12;
    int c = 0;

    int r1 = (a != 6 && b > 5);
    int r2= (a == 9 || b < 3);
    int r3 = !(a > 5 && c);
    int r4= (a & b | c);
    int r5 = (a << 2);
    int r6 = (b << 1);

    printf("Result 1: %d\n", r1);
    printf("Result 2: %d\n", r2);
    printf("Result 3: %d\n", r3);
    printf("Result 4: %d\n", r4);
    printf("Result 5: %d\n", r5);
    printf("Result 6: %d\n", r6);

    return 0;
}
