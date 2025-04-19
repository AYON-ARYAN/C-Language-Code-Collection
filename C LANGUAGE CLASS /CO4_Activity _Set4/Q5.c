#include <stdio.h>


void Cubes(int n);

int main() {
    int n;


    printf("Enter an integer value (n): ");
    scanf("%d", &n);

    

    printf("Cubes of numbers up to %d:\n", n);

    Cubes(n);

    return 0;
}


void Cubes(int n) {
    int i = 1;

    do {
        int cube = i * i * i;
        printf("%d\n", cube);
        i++;
    } while (i <= n);
}
