// #include <stdio.h>

// int main()
// {
//     int ab = 90, b, c;
//     int *a = &ab; // Pointer to variable 'a'
//     printf("%d", *a);
//     return 0;
// }
////////////////////////////////////////swap the variables
// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter the value of the first number: ");
//     scanf("%d", &a);
//     printf("Enter the value of the second number: ");
//     scanf("%d", &b);

//     int *d = &a; // Pointer d is assigned the address of variable a
//     int *e = &b; // Pointer e is assigned the address of variable b

//     c = *d;  // Store the value pointed to by d (value of a) in c
//     *d = *e; // Assign the value pointed to by e (value of b) to the memory location pointed to by d (a)
//     *e = c;  // Assign the value stored in c (initial value of a) to the memory location pointed to by e (b)

//     printf("Exchanged values = %d, %d\n", a, b);
//     return 0;
// }
//////////////////////////////////////////function to find the max number of value in the array
// #include <stdio.h>

// int main()
// {
//     int a, b, c;
//     printf("Enter the number of vlaues you want in the array: ");
//     scanf("%d", &a);
//     int arr[a];
//     int *d = &a; // Pointer d is assigned the address of variable a
//     for (int i = 0; i < *d; i++)
//     {
//         printf("Enter element number  %d : ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int max = 0;
//     for (int j = 0; j < *d; j++)
//     {
//         if (arr[j] > max)
//         {
//             max = arr[j];
//         }
//     }
//     printf("\nThe maximum value in the array is %d.", max);
//     return 0;
// }
