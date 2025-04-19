#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array:\n");
    for (int j = 0; j < a; j++)
    {
        printf("%d\n", arr[j]);
    }
    // maximum in the array
    int b = arr[0];
    for (int k = 0; k < a; k++)
    {
        if (arr[k] > b)
        {
            b = arr[k];
        }
    }

    printf("The largest number is %d\n", b);
    // minimum
    int g = arr[0];
    for (int v = 0; v < a; v++)
    {
        if (arr[v] < g)
        {
            g = arr[v];
        }
    }

    printf("The smallest number is %d\n", g);
    // square all elements of the array
    int h;
    for (int l = 0; l < a; l++)
    {
        h = arr[l] * arr[l];
        printf("The square is %d\n", h);
    }
    // average
    int o = 0, r = 0;
    for (int x = 0; x < a; x++)
    {
        o++;
        r += arr[x];
    }
    printf("The average is %d", r / o);
    // given element present or not
    int kl, km;
    printf("\nWhich element you want to scerch for ");
    scanf("%d", &kl);
    for (int z = 0; z < a; z++)
    {
        if (arr[z] == kl)
        {
            km = 1;
        }
        else
        {
            km = 0;
        }
    }
    if (km == 1)
    {
        printf("\nThe element is present ");
    }
    else
    {
        printf("\nIt is not present");
    }
    // reversing an array

    for (int sex = a - 1; sex >= 0; sex--)
    {
        printf("\n%d\n", arr[sex]);
    }

    return 0;
}
