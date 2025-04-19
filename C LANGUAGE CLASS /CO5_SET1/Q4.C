#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }


    printf("\nSmallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);


    printf("Size of the array: %lu bytes\n", sizeof(arr));


    printf("Array bounds: 0 to %d\n", n - 1);

    return 0;
}
