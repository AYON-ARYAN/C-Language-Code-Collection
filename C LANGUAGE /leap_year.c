// #include <stdio.h>

// int main() {
//     int year;
//     printf("Enter a Year: ");
//     scanf("%d", &year);
    
//     if (year % 4 ==0){
//     if (year % 100 == 0) {
//         if (year % 400 == 0) {
//             printf("This is a Leap Year.\n");
//         } else {
//             printf("This is not a Leap Year.\n");
//         }    
//         }
//     } else {
//         printf("This is a Leap Year.\n");
//     }
    

//     return 0;
// }
//\\\\\\\\\\\\\\\\\\\\\\\\DONT DO THIS MISTAKE
#include <stdio.h>

int main() {
    int year;
    printf("Enter a Year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("This is a Leap Year.\n");
    } else {
        printf("This is not a Leap Year.\n");
    }

    return 0;
}
