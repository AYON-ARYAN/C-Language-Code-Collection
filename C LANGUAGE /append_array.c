#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter the size of Array: ");
    scanf("%d", &a);

    int arr[a];

    printf("How many elements to insert into the array: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Entered elements: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int h, j;
    printf("Enter the number to insert into the array: ");
    scanf("%d", &h);
    printf("Enter the location to insert the element: ");
    scanf("%d", &j);

    if (j >= 0 && j < a)
    {
        for (int i = a - 1; i >= j; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[j] = h;
        a++;
        printf("The element %d inserted at location: %d\n", h, j);
    }
    printf("Updated elements: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
