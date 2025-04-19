#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "UNIX";
    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    for (int i = len - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
