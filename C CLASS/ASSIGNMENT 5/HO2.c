#include <stdio.h>

int main() {
    int a;
    for (a = 1; a <= 100; a++) {
        if (a == 60) {
            printf("Break the loop at i = 60\n");
            break;
        }
        printf("a = %d\n", a);
    }
    return 0;
}
