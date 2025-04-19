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


// ANOTHER METHOD//////////////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// #include<stdio.h>
// int main()
// {
// int a;
// int b;
// printf("Enter the first number to swap: ");
//     scanf("%d", &a);
//     printf("Enter the second number to swap: ");
//     scanf("%d", &b);
// a=a+b;
// b=a-b;
// a=a-b;
// printf("%d\n",a);
// printf("%d",b);
// return 0;
// }

//ANOTHER METHOD///////////////////////////////////////////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
// #include<stdio.h>
// int main()
// {
// int x;
// int y;
// printf("Enter the first number to swap: ");
//      scanf("%d", &x);
//      printf("Enter the second number to swap: ");
//      scanf("%d", &y);
// x=x^y;
// y=x^y;
// x=x^y;
// printf("%d\n",x);
// printf("%d",y);
// return 0;
// }
