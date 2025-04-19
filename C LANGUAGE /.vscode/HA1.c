#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int **A, int m1, int n1, int **B, int m2, int n2, int **C)
{
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < n1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int m1, n1, m2, n2;

    printf("Enter dimensions of matrix A (m1 x n1): ");
    scanf("%d %d", &m1, &n1);

    printf("Enter dimensions of matrix B (m2 x n2): ");
    scanf("%d %d", &m2, &n2);

    int **A = (int **)malloc(m1 * sizeof(int *));
    int **B = (int **)malloc(m2 * sizeof(int *));
    int **C = (int **)malloc(m1 * sizeof(int *));

    for (int i = 0; i < m1; i++)
    {
        A[i] = (int *)malloc(n1 * sizeof(int));
    }

    for (int i = 0; i < m2; i++)
    {
        B[i] = (int *)malloc(n2 * sizeof(int));
    }

    for (int i = 0; i < m1; i++)
    {
        C[i] = (int *)malloc(n2 * sizeof(int));
    }

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, m1, n1, B, m2, n2, C);

    printf("Resultant Matrix C (%d x %d):\n", m1, n2);
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m1; i++)
    {
        free(A[i]);
    }
    free(A);

    for (int i = 0; i < m2; i++)
    {
        free(B[i]);
    }
    free(B);

    for (int i = 0; i < m1; i++)
    {
        free(C[i]);
    }
    free(C);

    return 0;
}
