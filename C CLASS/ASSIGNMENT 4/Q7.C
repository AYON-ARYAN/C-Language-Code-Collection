#include <stdio.h>

int main()
{
    int n, left, right;

    printf("Enter an integer: ");
    scanf("%d", &n);

    left = n << 1;

    right = n >> 1;

    printf("Original number: %d\n", n);
    printf("Left-shifted by 1: %d\n", left);
    printf("Right-shifted by 1: %d\n", right);

    return 0;
}
