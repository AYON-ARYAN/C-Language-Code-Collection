// #include <stdio.h>

// int max(int num1, int num2);

// int main()
// {
//     int a = 100, b = 200;
//     int result = max(a, b);
//     printf("The maximum number is %d", result);
//     return 0;
// }

// int max(int num1, int num2)
// {
//     int result;
//     if (num1 > num2)
//     {
//         result = num1;
//     }
//     else
//     {
//         result = num2;
//     }
//     return result;
// }
/////////////////////////////////////////////////////////////////////////
// #include <stdio.h>
// int i = 20;
// main()
// {
//     display(i);
// }
// display(int j)
// {
//     int k = 35;
//     printf("\n%d", j);
//     printf("\n%d", k);
//     printf("\n%d", i);
// }
 //////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

// #include<stdio.h>
// int main()
// {
//     int i = 3;
//     printf("\nvalu e of i =%d", i);
//     printf("\n address of i=%u", &i);
//     return 0;
// }

#include<stdio.h>
int  main()
{
    int i=3;
    int *j;
    j =&i;
    printf("\n address of i=%u",&i);
    printf("\n address of i=%u",j);
    printf("\n address of j=%u",&j);
    printf("\n value of j=%u",&j);
     printf("\n value of i=%d",i);
      printf("\n value of i=%d",*(&i));
       printf("\n value of i=%d",*j);


}


