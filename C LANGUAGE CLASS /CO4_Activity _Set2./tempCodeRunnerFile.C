#include <stdio.h>

int main() {
    int coloumns = 4;

    for (int i = 1; i <= coloumns; i++) {
        for (int j = 1; j <= coloumns; j++) {
            printf("* ");
        }
        printf("\n");

        if (i == 2) {
            break; 
        }
    }

    return 0;
}
