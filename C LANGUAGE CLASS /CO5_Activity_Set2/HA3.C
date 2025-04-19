#include <stdio.h>

int main() {
    char item[5] = {'a', 'b', 'c', 'd', 'e'};

    printf("Original : ");
    for (int i = 0; i < 5; i++) {
        printf("%c ", item[i]);
    }

    printf("\nASCII values: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", item[i]);
    }

    printf("\n");

    return 0;
}
