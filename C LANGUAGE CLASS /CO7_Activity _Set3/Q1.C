#include <stdio.h>

void input(int *a, int *b)
{
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
}

void add(int a, int b, int *sum)
{
    *sum = a + b;
}

void output(int sum)
{
    printf("Answer: %d\n", sum);
}

int main()
{
    int a, b, sum;

    input(&a, &b);

    add(a, b, &sum);

    output(sum);

    return 0;
}
