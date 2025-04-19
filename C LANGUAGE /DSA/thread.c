#include <stdio.h>
#include <pthread.h>
struct t
{
    int a, b, c;
}
 void *calc(void *arg)
{
    t *tt=(t* )arg;
    int a = tt->a;
    int b = tt->b;
    int c = tt->c;
    if (c == 1)
    {
        printf("%d\n", a + b);
    }
    else if (c == 2)
    {
        printf("%d\n", a - b);
    }
    else if (c == 3)
    {
        printf("%d\n", a * b);
    }
    else if (c == 4)
    {
        printf("%d\n", a / b);
    }
    else
    {
        printf("Invalid operator\n");
    }
    return NULL;
}
int main()
{
    pthread_t t1;
    int a,b,c;
    printf("Enter the digit: ");
    scanf("%d", &a);
    printf("Enter the digit: ");
    scanf("%d", &b);
    printf("Enter the operator: ");
    scanf("%d", &c);
    struct t d1=(a,b,c);
    return 0;
}