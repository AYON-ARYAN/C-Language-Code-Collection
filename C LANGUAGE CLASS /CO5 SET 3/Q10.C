#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key)
            return mid;

        // If the key is smaller, ignore the right half
        else if (arr[mid] > key)
            high = mid - 1;

        // If the key is larger, ignore the left half
        else
            low = mid + 1;
    }

    // Key is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 44, 54, 67, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 54; // Element to search

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Element %d is not present in the array.\n", key);
    else
        printf("Element %d is present at index %d.\n", key, result);

    return 0;
}
