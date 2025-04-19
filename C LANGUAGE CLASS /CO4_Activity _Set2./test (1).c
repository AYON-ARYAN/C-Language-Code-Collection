
//  Q1- Write a program to find the sum of all numbers between 1 and 100 that are divisible by 7 using a for loop.

// ans-#include <stdio.h>

// int main() {
//     int i, k;

//     for (i = 0; i < 101; i++) {
//         if (i % 7 == 0) {
//             k = i;
//             printf("%d is divisible by 7\n", k);
//         }
//     }

//     return 0;
// }

// Q2-Create a program that prints a pattern of numbers in a right-angled triangle using nested loops, where each row contains numbers from 1 to the row number.
// ans-#include<stdio.h>

// int main(){
//     int o;
//     printf("Enter the number of rows");
//     scanf("%d",o);
//     for (int i = 0; i <= o; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Q3-Implement a program to reverse a given number using a while loop.
// ans-#include<stdio.h>

// int main(){
//     int a,b,c=0;
//     printf("What is the number you want to reverse ");
//     scanf("%d",&a);
//     while (a !=0)
//     {
//         b=a%10;
//         c=c*10+b;
//         a/=10;

//     }
//     printf("reversed number=%d",c);
//     return 0;
// }

// Q4-Prime Number Check: Create a program that checks if a given number is a prime number using a for loop.
// #include <stdio.h>

// int main()
// {
//     int a , b, c = 1;
// printf("What is the value of i");
// scanf("%d",a);
//     for (int i = 2; i <= a; i++)
//     {
//         if (a % i == 0)
//         {
//             printf("%d is prime ",a);
//             break;
//         }
//         else
//         {
//             printf("%d is not a prime number",a);
//             break;
//         }
//     }

//     return 0;
// }
// Q7-Fibbonachi
#include <stdio.h>

int main()
{
    int n;
    int a1 = 0, a2 = 1;
    printf("How many fibbonacci do you want ");
    scanf("%d", &n);
    printf("Fibonacci Sequence:\n");

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            printf("%d, ", a1);
        }
        else
        {
            printf("%d\n", a1);
        }

        int g = a1 + a2;
        a1 = a2;
        a2 = g;
    }

    return 0;
}
