#include <stdio.h>

int mystrlen(char *s);

int main()
{
    char *ptr = "Dear";
    char name[50] = "Reader";

    printf("length of strings::\n");
    printf("Hello is %d\n", mystrlen("Hello"));
    printf("Dear is %d\n", mystrlen(ptr));
    printf("Reader is %d\n", mystrlen(name));

    return 0;
}

int mystrlen(char *s)
{
    int i = 0;
    while (*(s + i) != '\0')
        i++;
    return i;
}
//  You are using (”) instead of standard double quotes ("). 