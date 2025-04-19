#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSize of the array: %lu bytes\n", sizeof(arr));

    printf("Array bounds: 0 to %d\n", n - 1);

    return 0;
}
