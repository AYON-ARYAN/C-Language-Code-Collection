#include <stdio.h>

int main() {
    int c;

    // Prompt the user to enter the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &c);

    // Declare an array with the specified size
    int arr[c];

    // Get input from the user for the array elements
    printf("Enter %d elements for the array:\n", c);
    for (int i = 0; i < c; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the original array elements
    printf("Original array elements:\n");
    for (int i = 0; i < c; i++) {
        printf("%d ", arr[i]);
    }

    // Prompt the user to enter the position of the element to delete
    int deletePosition;
    printf("\nEnter the position of the element to delete (1 to %d): ", c);
    scanf("%d", &deletePosition);

    // Check if the position is valid
    if (deletePosition < 1 || deletePosition > c) {
        printf("Invalid position entered.\n");
        return 1; // Exit with an error code
    }

    // Delete the element at the specified position
    for (int i = deletePosition - 1; i < c - 1; i++) {
        arr[i] = arr[i + 1];
    }
    c--; // Decrease the size of the array

    // Print the updated array elements
    printf("Updated array elements after deletion:\n");
    for (int i = 0; i < c; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
