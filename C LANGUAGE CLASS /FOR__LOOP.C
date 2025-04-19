// #include <stdio.h>

// int main()
// {
//     int f = 1;

//     for (; f < 11; f++)
//     {
//         printf("The value of f is %d\n", f);
//     }

//     return 0;
// }
////////////////////////////////////////////////////
// #include <stdio.h>

// int main()
// {
//     int a;
//     int s = 0;

//     printf("Write the value of a ");
//     scanf("%d",a);

//     for (; a < 100; a++)
//     {
//         s = s + a;
//     }
//     printf("The value of all the numbers = %d", s);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int f;
    int b;

    printf("What is the value of a=");
    scanf("%d", f);

    for (f = 1; f <= b; f = f + 1)
    {
        if (f % 2 != 0)
        {
            printf("%d was a even number", b);
        }
        else
        {
            printf("%d was a odd number", b);
        }
    }

    return 0;
}