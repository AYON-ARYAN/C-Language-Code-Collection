// #include <stdio.h>

// int main() {
//     int a;
//     printf("Enter the value of a: ");
//     scanf("%d", &a);

//     for (  ;a < 100; a++) {
//         printf("The value of a is %d\n", a);
//     }

//     return 0;
//}
#include <stdio.h>

int main() {
    int add = 0;

    for (int i = 1; i <= 10; i++) {
       
    add += i; 
    }

    printf("The sum of numbers from 1 to 100 is: %d\n",add);

    return 0;
}


// #include <stdio.h>

// int main()
// {
//     int n;
//     int ans = 0;

//     printf("Type the value of the number: ");
//     scanf("%d", &n);

//     for (int i = n; i >= 1; i--)
//     {
//         printf("The value of i is %d\n", i);

//         if (i % 2 == 0)
//         {
//             ans += i;
//         }
//     }

//     printf("Sum of even numbers is: %d\n", ans);

//     return 0;
// }
