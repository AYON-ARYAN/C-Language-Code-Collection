#include <stdio.h>

int main() {
    int c;

    // Prompt the user to enter the size of the array
    printf("Enter the size of array: ");
    scanf("%d", &c);

    // Declare an array with the specified size
    int arr[c];

    // Get input from the user for each element
    printf("Enter %d elements for the array:\n", c);
    for (int i = 0; i < c; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("Array elements:\n");
    for (int i = 0; i < c; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
