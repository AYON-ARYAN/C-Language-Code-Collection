#include <stdio.h>

void splitAndAdd(int arr[], int size, int splitIndex) {
    int i, temp;

    // Rotate the array elements to the right
    for (i = 0; i < splitIndex; i++) {
        temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int splitIndex = 3; // Index at which to split the array

    // Display the original array
    printf("Original Array:\n");
    displayArray(arr, size);

    // Split the array and add the first part to the end
    splitAndAdd(arr, size, splitIndex);

    // Display the modified array
    printf("\nArray after splitting and adding first part to the end:\n");
    displayArray(arr, size);

    return 0;
}
