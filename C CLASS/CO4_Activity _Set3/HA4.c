#include <stdio.h>

void average();

int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        average();
    }

    return 0;
}

void average()
{
    int sum = 0;
    int count = 0;

    for (int i = 1; i <= 20; i++)
    {
        sum =sum + i;
        count++;
    }

    printf("The average of the range of numbers from 1 to 20 is %f\n", (float)sum / count);
}
