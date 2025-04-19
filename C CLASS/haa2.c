#include <stdio.h>

int main() {
    int i, r, sum = 0, num,v;
    int a;

    printf("Enter the start: ");
    scanf("%d", &num);
    printf("Enter the end: ");
    scanf("%d", &v);


    i = num;
    while (i > 0) {
        r = i % 10;
        sum += r * r * r;
        i = i / 10;
    }

    if (num == sum) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }


    for (a = 0; a < v; a++) {
        printf("%d \n", a);
    }

    return 0;
}


    
    
