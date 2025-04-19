#include <stdio.h>

int main()
{
    int a, b;

    printf("How many elements you want in the array?");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < a; j++)
    {
        printf("%d\t", arr[j]);
    }

    printf("\nYou want to rotate the array at which position: (Write the number 1 greater than the needed one)");
    scanf("%d", &b);

    int temp[a];

    for (int o = 0; o < a; o++)
    {
        temp[o] = arr[o];
    }

    for (int k = 0; k < a; k++)
    {
        arr[k] = temp[(k + b) % a];//The only way i found to rotate the array
    }

    printf("Rotated array:\n");
    for (int z = 0; z < a; z++)
    {
        printf("%d\t", arr[z]);
    }

    return 0;
}
