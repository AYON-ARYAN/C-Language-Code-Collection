#include <stdio.h>

int main()
{
    int a;
    int arr[100];

    printf("Enter the number you want Fibonacci sequence till: ");
    scanf("%d", &a);

    //  Fibonacci sequence
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < a; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2]; // fibbonachi series in=s just the sum of the previous element of i and the next one like 1,2,3 so in second place it will be 1+3=5
    }

    // Printing
    for (int k = 0; k < a; k++)
    {
        printf("%d\t", arr[k]);
    }

    return 0;
}
