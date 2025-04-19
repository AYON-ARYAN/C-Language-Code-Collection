#include <stdio.h>

int main() {
    int dig;

    printf("Enter an integer: ");
    scanf("%d", &dig);

    switch (dig % 2) {
        case 0:
            printf("%d is an even number.\n", dig);
            break;
        case 1:
        case -1:
            printf("%d is an odd number.\n", dig);
            break;
    }

    return 0;
}
