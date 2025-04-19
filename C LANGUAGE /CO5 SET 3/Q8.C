#include <stdio.h>

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Function to print the elements of an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Declare an array with the given elements
    int arr[] = {34, 56, 11, 13, 17, 37, 2, 83};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    printf("Original array:\n");
    printArray(arr, n);

    // Sort the array using selection sort
    selectionSort(arr, n);

    // Print the sorted array
    printf("Sorted array using Selection Sort:\n");
    printArray(arr, n);

    return 0;
}
