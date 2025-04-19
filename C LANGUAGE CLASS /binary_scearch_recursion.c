#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int target)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binarySearchRecursive(arr, low, mid - 1, target);

        return binarySearchRecursive(arr, mid + 1, high, target);
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 7, 10, 14, 19, 23, 27, 32, 36};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
