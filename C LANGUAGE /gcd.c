#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
///////////////////
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(result, arr[i]);
    }

    printf("HCF of the array is %d\n", result);

    return 0;
}
