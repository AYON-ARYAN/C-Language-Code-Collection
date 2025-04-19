#include <stdio.h>

int main() {
    int n;

    // Input the number of values
    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];

    // Input values into the array
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array elements
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Find the smallest and largest numbers
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

    // Display the smallest and largest numbers
    printf("\nSmallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    // Display the sum of all elements
    printf("Sum of all elements: %d\n", sum);

    // Check array size
    printf("Size of the array: %lu bytes\n", sizeof(arr));

    // Check array bounds
    printf("Array bounds: 0 to %d\n", n - 1);

    return 0;
}
