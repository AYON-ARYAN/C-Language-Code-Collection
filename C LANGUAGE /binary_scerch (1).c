#include <stdio.h>

int main() {
    int a;
    printf("Enter the number of elements you want in the array:\n ");
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        printf("Enter element %d: \n", i + 1);
        scanf("%d", &arr[i]);
    }
    //bubble sort
    int temp=0;
    for (int w = 0; w < a - 1; w++) {
            for (int j = 0; j < a - w - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    

    // binary search
    int b;
    printf("Enter the element you want to search in the array: \n");
    scanf("%d", &b);

    int right = a - 1;
    int left = 0;
    int found_index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == b) {
            found_index = mid;
            printf("Element found at index %d\n", found_index);
            break; // Terminate the loop once the element is found
        } else if (arr[mid] < b) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found_index == -1) {
        printf("Element not found in the array\n");
    }

    return 0;
}
