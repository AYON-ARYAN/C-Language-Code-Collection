#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr = "Dear";
    char name[50] = "Reader";

    printf("length of strings::\n");
    printf("Hello is %d\n", strlen("Hello"));
    printf("Dear is %d\n", strlen(ptr));
    printf("Reader is %d\n", strlen(name));

    return 0;
}
//Change this (”).