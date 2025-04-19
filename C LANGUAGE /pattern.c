#include <stdio.h>

int main()
{
    int row;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &row);

    // Triangle
    printf("\nTriangle:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Numbers
    printf("\nNumbers:\n");
    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l <= k; l++)
        {
            printf("%d", k + 1);
        }
        printf("\n");
    }

    // Consecutive Numbers
    printf("\nConsecutive Numbers:\n");
    for (int m = 0; m < row; m++)
    {
        for (int n = 0; n <= m; n++)
        {
            printf("%d", n + 1);
        }
        printf("\n");
    }
    // triangle
    printf("\nTriangles:\n");
    for (int o = 0; o < row; o++)
    {
        // Inner loop for spaces
        for (int p = 0; p < row - o - 1; p++)
        {
            printf(" ");
        }

        // Inner loop for printing '*'
        for (int q = 0; q < 2 * o + 1; q++)
        {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
