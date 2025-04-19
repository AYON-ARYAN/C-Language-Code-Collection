// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("the value of i is %d ", i);
//         i++

//     } while (i < 10);
//     return 0;
// }

// while loop checks the condition and then exhecutes the code------------do while loop exhecutes and then checks the condition

#include <stdio.h>


int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    if (i <= 0)
    {
        printf("Please enter a positive number greater than 0.\n");
    }
    else
    {
        int num = 1; // Initialize the num variable here
        printf("Natural numbers before %d are: ", i);

        while (num < i)
        {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}
