#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[]= {'h','a','r','r', 'y','\0'};     in this case we need to write \0
    // output=harry%                                in this case nothing is needed
    // char str[] = "harry";
    char str[34];
      printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Using printf: %s", str);

    // printstr(str);
    return 0;
}