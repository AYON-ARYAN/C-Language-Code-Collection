// #include <stdio.h>

// int main() {
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);

//     for ( ; a < 100; a++) {
//         printf("The value of a is %d\n", a);
//     }

//     return 0;
// }



#include <stdio.h>

int main() {
    int n;

    printf("Type the value of the number: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        printf("The value of i is %d\n", i);
    }

    return 0;
}
