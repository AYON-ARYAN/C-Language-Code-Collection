#include <stdio.h>

void input(int arr[], int size);
void print(int arr[], int a);

int main()
{
    int tot;

    printf("The size of the array is: ");
    scanf("%d", &tot);

    int arr[tot];

    input(arr, tot);
    print(arr, tot);

    return 0;
}

void input(int arr[], int size)
{
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void print(int arr[], int a)
{
    printf("The array is: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
