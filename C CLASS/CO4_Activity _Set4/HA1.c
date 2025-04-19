#include <stdio.h>


void working(int n);

int main() {
    int n;


    printf("Enter the number of rows: ");
    scanf("%d", &n);

    
    working(n);

    return 0;
}


void working(int n) {
    int i = 1;

    do {
        int j = 1;
        do {
            printf("%d ", j);
            j++;
        } while (j <= i);
        printf("\n");
        i++;
    } while (i <= n);
}
