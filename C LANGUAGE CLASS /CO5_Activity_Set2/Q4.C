#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 2, 4, 3};
    int count[5] = {0};

    printf("Original array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);

        count[arr[i] - 1]++;
    }

    printf("\nUnique elements: ");
    for (int i = 0; i < 5; i++)
    {
        if (count[i] == 1)
        {
            printf("%d ", i + 1);
        }
    }

    printf("\n");

    return 0;
}
