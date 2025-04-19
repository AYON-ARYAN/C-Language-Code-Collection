#include <stdio.h>

int main()
{
    int n, sum = 0;
    float average;


    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int value;
        printf("Enter value %d: ", i);
        scanf("%d", &value);
        sum += value;
    }

    average = (float)sum / n;

    printf("Sum of the %d values: %d\n", n, sum);
    printf("Average of the %d values: %f\n", n, average);

    return 0;
}
