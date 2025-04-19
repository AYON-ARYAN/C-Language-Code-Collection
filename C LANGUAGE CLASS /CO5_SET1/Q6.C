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

    // Calculate the average
    float average = (float)sum / n;

    // Display the average
    printf("\nAverage of %d numbers: %.2f\n", n, average);

    return 0;
}
