#include <stdio.h>

int main()
{
    int skip = 5;
    int i = 0;
    while (i < 10)
        i++;
    {
        if (i != skip){
            continue;
        }
        else{
            ;
        printf("%d", i);
        /* code */
        }
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int skip = 5;
//     int i = 0;

//     while (i < 10)
//     {
//         if (i == skip)
//         {
//             i++; // Increment i here to skip the current value
//             continue; // Skip the rest of the loop and move to the next iteration
//         }
//         printf("%d ", i); // Print the value of i if it's not equal to 'skip'
//         i++; // Increment i after printing
//     }

//     return 0;
// }
