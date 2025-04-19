#include <stdio.h>

int main()
{
    int a, b;

    // Get the number of elements in the array
    printf("How many elements you want in the array: ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
//print the original array
for (int l = 0; l < a; l++)
{
    printf("%d \t", arr[l]);
}

    printf("\nEnter the number of steps to rotate the array:\n");
    scanf("%d", &b);

    // Perform array rotation
    for (int i = 0; i < b; i++)
    {
        int temp = arr[a - 1];
        for (int j = a - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    // Print the rotated array
    printf("Rotated array: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}
