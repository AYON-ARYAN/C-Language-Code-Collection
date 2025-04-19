// #include <stdio.h>

// int main()
// {
//     int src[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int x;
//     int n;
//     int i;

//     printf("Enter the element you want to search for: ");
//     scanf("%d", &x);

//     for (i = 0; i < n; i++)
//     {
//         if (src[i] == x)
//         {
//             printf("The element is found at position %d\n", i + 1);
//             break;
//         }
//     }

//     if (i == n)
//     {
//         printf("Element not found\n");
//     }

//     return 0;
// }
/////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//     int a[] = {35, 83, 40, 90, 62};
//     int x = 90, i, j, min = a[j];
//     for (i = 0; i < 5; i++)
//     {
//         for (j = 0; j < 5; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 min = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = min;
//             }
//         }
//     }
//     for (int i = 0; i < 5; i++)
//         printf("%d ", a[i]);

//     return 0;
// }
////////////////////////////////////////////////////////////////////////
#include <stdio.h>
int main()
{
    int a[6];
    int n, i, position, j, min;
    printf("enter the size of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the element:");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[position] > a[j])
                position = j;
            {
                min = a[i];
                a[i] = a[position];
                a[position] = min;
            }
        }
    }
    printf("Sorted Array:");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}