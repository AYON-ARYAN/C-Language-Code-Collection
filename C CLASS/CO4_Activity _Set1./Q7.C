#include <stdio.h>

int main()
{
    int n;

    printf("Enter an number: ");
    scanf("%d", &n);

    printf("Every prime numbers less than %d are:\n", n);

    for (int i = 2; i < n; i++)
    {
        int yes = 1;

        for (int no = 2; no < i; no++)
        {
            if (i % no == 0)
            {
                yes = 0;
                break;
            }
        }

        if (yes)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
