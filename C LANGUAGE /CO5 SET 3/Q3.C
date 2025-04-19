#include <stdio.h>

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

    // Prompt the user to enter an element at the first or last position
    int position;
    printf("Enter 1 to add an element at the beginning or 2 to add at the end: ");
    scanf("%d", &position);

    int newElement;
    printf("Enter the new element: ");
    scanf("%d", &newElement);

    // Add the element at the specified position
    if (position == 1)
    {
        // Shift elements to the right to make space for the new element at the beginning
        for (int i = c; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = newElement;
        c++; // Increase the size of the array
    }
    else if (position == 2)
    {
        // Add the new element at the end of the array
        arr[c] = newElement;
        c++; // Increase the size of the array
    }
    else
    {
        printf("Invalid position entered.\n");
        return 1; // Exit with an error code
    }

    // Print the updated array elements
    printf("Updated array elements:\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
