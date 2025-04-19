#include <stdio.h>

int main()
{
    int a, b = 0, c, d;
    // Number of elements in an array
    printf("Enter the number of elements you want to enter in the array: ");
    scanf("%d", &a);

    int arr[a];
    // Input elements of an array
    for (int i = 0; i < a; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the maximum value of the array
    c = arr[0];
    for (int k = 0; k < a; k++)
    {
        if (arr[k] > c)
        {
            c = arr[k];
        }
    }
    printf("Maximum value of the array: %d\n", c);

    // Find the minimum value of the array
    d = arr[0];
    for (int l = 0; l < a; l++)
    {
        if (arr[l] < d)
        {
            d = arr[l];
        }
    }
    printf("Minimum value of the array: %d\n", d);

    // Calculate the square of each element
    printf("Square of each element:");
    for (int j = 0; j < a; j++)
    {
        printf("%d ", arr[j] * arr[j]);
    }

    // Calculate the sum of the array
    for (int m = 0; m < a; m++)
    {
        b = b + arr[m];
    }
    printf("\nSum is %d\n", b);

    // Calculate the average of the array
    float avg = (float)b / a;
    printf("The average of the array is %f\n", avg);
    // Calculate sum of even and odd numbers seperately in an array
    // For even
    int e = 0;
    for (int s = 0; s < a; s++)
    {
        if ((arr[s]) % 2 == 0)
        {
            e = arr[s] + e;
        }
    }
    printf("The sum of all even numbers= %d\n", e);
    // For odd
    int v = 0;
    for (int q = 0; q < a; q++)
    {
        if ((arr[q]) % 2 != 0)
        {
            v = arr[q] + v;
        }
    }
    printf("The sum of all odd numbers= %d\n", v) ;
    return 0;
}
