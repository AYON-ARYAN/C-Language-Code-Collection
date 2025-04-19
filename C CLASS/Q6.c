#include <stdio.h>

int main() {
    int ram, shyam, ajay;

    printf("Enter age of Ram: ");
    scanf("%d", &ram);

    printf("Enter age of Shyam: ");
    scanf("%d", &shyam);

    printf("Enter age of Ajay: ");
    scanf("%d", &ajay);

    if (ram <= shyam && ram <= ajay) {
        printf("Ram is the youngest and his age is %d.\n", ram);
    } else if (shyam <= ram && shyam <= ajay) {
        printf("Shyam is the youngest with age is %d.\n", shyam);
    } else {
        printf("Ajay is the youngest and his age is %d.\n", ajay);
    }

    return 0;
}
