#include <stdio.h>

int main()
{
    int n;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array with the specified size
    int arr[n];

    // Get input from the user for the array elements
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the largest
    int largest = arr[0];

    // Find the largest element in the array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    // Print the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
