#include <stdio.h>
#include <math.h>

int main()
{
    double n1, n2, current;

   
    printf("Enter the first number to swap: ");
    scanf("%lf", &n1);

    printf("Enter the second number to swap: ");
    scanf("%lf", &n2);

    
    current = n1;
    n1 = n2;
    n2 = current;

    
    printf("After swapping, the first number is: %lf\n", n1);
    printf("After swapping, the second number is: %lf\n", n2);

    return 0;
}