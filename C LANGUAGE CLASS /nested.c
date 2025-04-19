#include <stdio.h>

int main()
{
    int s;
    int a;

    printf("What did you score?\n");
    scanf("%d", &s);  

    printf("What is your age?\n");
    scanf("%d", &a);  

    if (s >= 70)
    {
        if (a < 13)
        {
            printf("\nGreat job\n");
        }
        else
        {
            printf("You passed\n");
        }
    }
    else
    {
        printf("YOU DID NOT PASS\n");
    }

    return 0;
}
