#include <stdio.h>


int TABLE(int number);

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    

    printf("Multiplication table for %d:\n", number);

    TABLE(number);

    return 0;
}


int TABLE(int number) {
    int i = 1;
    while (i <= 10) { 
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }
    return 0;
}
