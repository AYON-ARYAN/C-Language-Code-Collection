#include <stdio.h>
#include <ctype.h>

int main()
{
    int a, count = 0;

    // User input for the size of the array
    printf("How many letters you want to find the vowels in: ");
    scanf("%d", &a);

    // Array declaration after taking the user input for its size
    char bcc[a];

    // User input for the sentence
    printf("Enter the sentence you want to find the vowels in: ");
    for (int i = 0; i < a; i++)
    {
        scanf(" %c", &bcc[i]); // Use %c for reading individual characters
    }

    // Counting vowels
    for (int j = 0; j < a; j++)
    {
        char currentChar = toupper(bcc[j]); // Convert the character to uppercase for comparison

        if (currentChar == 'A' || currentChar == 'E' || currentChar == 'I' || currentChar == 'O' || currentChar == 'U')
        {
            count++;
        }
    }

    printf("The number of total vowels is %d\n", count);

    // Copying string 1 to string 2
    char string2[a];
    for (int h = 0; h < a; h++)
    {
        string2[h] = bcc[h];
    }

    printf("The copied string is %s\n", string2);

    // Reversing strings
    printf("The reversed string is ");
    for (int z = 0; z < a; z++)
    {
        printf("%c", bcc[a - z - 1]);
    }
    printf("\n");
    // check for palindrome
    int palindrome = 1;
    for (int x = 0; x < a; x++)
    {
        if (bcc[x] != bcc[a - x - 1])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome)
    {
        printf("\nIt is a Palindrome.\n");
    }
    else
    {
        printf("It is not a Palindrome.\n");
    }

    return 0;
}
