// #include <stdio.h>

// int main()
// {
//     int a, i, j;
//     printf("Enter th no.");
//     scanf("%d", &a);
//     for (i = 0; i <= a; i++)
//     {
//         for (j = 0; j < i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a, i, j;
//     printf("Enter the number: ");
//     scanf("%d", &a);

//     for (i = a; i >= 1; i--) 
//     {
//         for (j = 1; j <= i; j++) 
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}



