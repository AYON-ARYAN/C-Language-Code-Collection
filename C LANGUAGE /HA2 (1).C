#include <stdio.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main()
{
    char str[300], reverse[300];
    input_string(str);
    str_reverse(str, reverse);
    output(str, reverse);
}

void input_string(char *a)
{
    printf("Enter your string:\n");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str)
{
    int size = 0;
    while (str[size] != '\0')
    {
        size++;
    }
    int j = 0;
    for (int i = size - 1; i > -1; i--)
    {
        rev_str[j] = str[i];
        j++;
    }
    rev_str[j] = '\0';
}

void output(char *a, char *reverse_a)
{
    printf("The reverse of the string \"%s\" is \n \"%s\"", a, reverse_a);
}