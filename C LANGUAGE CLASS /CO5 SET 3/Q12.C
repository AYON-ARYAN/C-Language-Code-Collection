#include <stdio.h>

void findTranspose(int matrix[3][3], int transpose[3][3]) {
    int i, j;

    // Find transpose of the matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[3][3]) {
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int transposeMatrix[3][3];

    // Find transpose of the matrix
    findTranspose(matrix, transposeMatrix);

    // Display the original matrix
    printf("Original Matrix:\n");
    displayMatrix(matrix);

    // Display the transpose matrix
    printf("\nTranspose Matrix:\n");
    displayMatrix(transposeMatrix);

    return 0;
}
