#include <stdio.h>
#include <math.h>

int main()
{
    int a, n;
    printf("What is the number you want to get table of ");
    scanf("%d", &n);
    for (a = 1; a <= 10; a++)
    {
        printf("The table is %d*%d=%d\n", n, a, a * n);
    }

    return 0;
}