#include <stdio.h>

int main()
{
    int a, b;

    printf("What is the number of rows?\n");
    scanf("%d", &a);

    printf("What is the number of columns?\n");
    scanf("%d", &b);

    int arr[a][b]; // Declare the 2D array after obtaining the values of a and b

    // Input
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter the number %d, %d element: \n", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the array
    printf("Entered 2D array:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Adding all the elements of the 2D array
    int sum = 0;
    for (int l = 0; l < a; l++)
    {
        for (int m = 0; m < b; m++)
        {
            sum += arr[l][m];
        }
    }
    printf("Sum of all elements: %d\n", sum);

    // Transpose of a 2D array
    int trans[a][b];
    for (int n = 0; n < a; n++)
    {
        for (int o = 0; o < b; o++)
        {
            trans[o][n] = arr[n][o];
        }
    }

    // Print the transposed array
    printf("Transposed array:\n");
    for (int p = 0; p < b; p++)
    {
        for (int q = 0; q < a; q++)
        {
            printf("%d\t", trans[p][q]);
        }
        printf("\n");
    }

    // Multiplication of arrays
    int c = 1, d = 1;
    int mul[c][d];
    for (int r = 0; r < a; r++)
    {
        for (int s = 0; s < b; s++)
        {
            mul[r][s] = trans[r][s] * arr[r][s];
        }
    }

    // Print the multiplied array
    printf("Result of multiplication:\n");
    for (int t = 0; t < a; t++)
    {
        for (int u = 0; u < b; u++)
        {
            printf("%d\t", mul[t][u]);
        }
        printf("\n");
    }

    //add other things you want 

    return 0;
}
