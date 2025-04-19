#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], temp;
    int len;

    printf("Enter a string to reverse: ");
    scanf("%s", str1);

    len = strlen(str1);

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }

    printf("Reversed string: %s\n", str1);

    return 0;
}
