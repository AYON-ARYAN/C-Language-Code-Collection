#include <stdio.h>

int main()
{
    int arr[15];

    printf("Enter the elements for the array:\n");
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < 15; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
