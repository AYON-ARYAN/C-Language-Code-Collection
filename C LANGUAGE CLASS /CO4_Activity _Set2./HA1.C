#include <stdio.h>

int main()
{
    int e[10];
    int o[10];
    const int s = 40;
    const float o = 12.0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter hours worked for Employee %d: ", i + 1);
        scanf("%d", &e[i]);

        if (e[i] > s)
        {
            o[i] = (e[i] - s) * o;
        }
        else
        {
            o[i] = 0;
        }
    }

    printf("\nEmployee Overtime Pay:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Employee %d: Rs. %d\n", i + 1, o[i]);
    }

    return 0;
}
