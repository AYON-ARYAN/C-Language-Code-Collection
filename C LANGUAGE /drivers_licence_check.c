#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 70 && age >= 18) {
        printf("YOU CAN DRIVE\n");
    } else {
        printf("YOU CANNOT DRIVE\n");
    }

    return 0;
}
