#include <stdio.h>

void Pyramid(int rows);

int main()
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    Pyramid(rows);

    return 0;
}

void Pyramid(int rows)
{
    int i = rows;

    do
    {
        int j = 1;
        do
        {
            printf("* ");
            j++;
        } while (j <= i);
        printf("\n");
        i--;
    } while (i >= 1);
}
