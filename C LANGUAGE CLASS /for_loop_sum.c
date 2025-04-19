#include <stdio.h>

int main() {
    int add = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            add += i;
        }
    }

    printf("The sum of all odd numbers from 1 to 10 is: %d\n", add);

    return 0;
}
