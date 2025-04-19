#include <stdio.h>

void calculateMaxAndMin(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }

        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max, min;

    calculateMaxAndMin(arr, n, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
