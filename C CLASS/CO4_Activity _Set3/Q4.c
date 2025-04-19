#include <stdio.h>

int main()
{
    int i, r, sum = 0, num;

    printf("What is the number you want to verify: ");
    scanf("%d", &num);


    i = num;
    while (i > 0)
    {
        r = i % 10;
        sum += r * r * r;
        i = i / 10;
    }

    if (num == sum)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
