#include <stdio.h>
#include <string.h>

void reverseStringWithoutInbuilt(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char strCopy[100];
    strcpy(strCopy, str);
    strrev(strCopy);
    printf("Reversed string using strrev(): %s\n", strCopy);

    reverseStringWithoutInbuilt(str);
    printf("Reversed string without in-built function: %s\n", str);

    return 0;
}
