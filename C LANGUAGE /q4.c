#include <stdio.h>

int search(const int *arr, int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (*arr == target)
        {
            return i;
        }
        arr++; 
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    int index = search(arr, n, target);

    if (index != -1)
    {
        printf("Element %d found at index %d\n", target, index);
    }
    else
    {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
