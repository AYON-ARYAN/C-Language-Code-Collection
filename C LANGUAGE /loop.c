// #include <stdio.h>

// int main(){
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);

//     while (a <= 100) { // Provide a condition for the while loop
//         printf("%d\n", a);
//         a++;
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int counter = 0;

    while (counter <= 20) {
        if (counter >= 10) {
            printf("Natural number: %d\n", counter);
        }
        counter++;
    }

    return 0;
}
