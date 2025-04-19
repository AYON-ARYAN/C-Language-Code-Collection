#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 123;
    char str[100];

    itoa(num, str, 10);

    printf("Integer: %d\n", num);
    printf("String: %s\n", str);

    return 0;
}
