// RIGHT ANGLED TRIANGLE
// #include <stdio.h>

// int main()
// {
//     int a;

//     printf("Enter the number of rows: ");
//     scanf("%d", &a);

//     for (int i = 1; i <= a; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// REVERSE RIGHT ANGLED TRIANGLE
#include <stdio.h>

int main()
{
    int f;

    printf("Enter the numbers of rows");
    scanf("%d", &f);

    for (int i = f; i >= 1; i--)
    {
        for (int j = 1; j <= f; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
