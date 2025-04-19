#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

int main()
{
    int c;

    // Prompt the user to enter the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &c);

    // Declare an array with the specified size
    int arr[c];

    // Get input from the user for the array elements
    printf("Enter %d elements for the array:\n", c);
    for (int i = 0; i < c; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the original array elements
    printf("Original array elements:\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[i]);
    }

    // Find the position of the smallest and largest numbers
    int smallestPosition = 0, largestPosition = 0;
    for (int i = 1; i < c; i++)
    {
        if (arr[i] < arr[smallestPosition])
        {
            smallestPosition = i;
        }
        if (arr[i] > arr[largestPosition])
        {
            largestPosition = i;
        }
    }

    // Delete the smallest and largest numbers
    for (int i = smallestPosition; i < c - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    c--; // Decrease the size of the array after deleting the smallest number

    for (int i = largestPosition; i < c - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    c--; // Decrease the size of the array after deleting the largest number

    // Print the updated array elements
    printf("\nUpdated array elements after deletion of smallest and largest numbers:\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
