#include <stdio.h>

int main()
{
    int n;
    int ans = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    printf("The result of factorial is: %d\n", ans);

    return 0;
}
