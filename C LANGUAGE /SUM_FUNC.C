#include <stdio.h>

// Function prototype for the 'sum' function
int sum(int a, int b);
int g, h;

int main()
{
    printf("What is the value of a\n");
    scanf("%d", &g);
    printf("What is the value of b\n");
    scanf("%d", &h);

    int c;
    c = sum(g, h);
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
