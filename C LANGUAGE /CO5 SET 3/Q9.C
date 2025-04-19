#include <stdio.h>

// Function to generate Pascal's Triangle using a 1D array
void generatePascalsTriangle(int n) {
    int arr[100]; // Assuming a maximum size for the array
    int i, j;

    for (i = 0; i < n; i++) {
        arr[i] = 0; // Initialize array elements to 0
    }

    arr[0] = 1; // Set the first element to 1 (first row of Pascal's Triangle)

    for (i = 1; i <= n; i++) {
        for (j = i; j >= 1; j--) {
            arr[j] = arr[j] + arr[j - 1]; // Update array elements based on the previous row
        }

        for (j = 0; j <= i; j++) {
            printf("%d ", arr[j]); // Print the elements of the current row
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Prompt the user to enter the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    // Generate and print Pascal's Triangle
    generatePascalsTriangle(n);

    return 0;
}
