#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, guess, ng = 1;
    srand(time(0));
    a = rand() % 100 + 1; // random number between 1 and 100

    // Keep the loop running until the number is guessed
    do
    {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &guess);

        if (guess > a)
        {
            printf("You guessed high\n");
        }
        else if (guess < a)
        {
            printf("You guessed low\n");
        }
        else
        {
            printf("You guessed it right in %d tries\n", ng);
        }

        ng++;
    } while (guess != a);

    printf("The number was %d\n", a);

    return 0;
}
