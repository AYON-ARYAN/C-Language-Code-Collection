#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, guess, ng = 1;
    srand(time(0));
    a = rand() % 100 + 1; // random number between 1 and 100
    printf("The number is %d\n",a);
    return 0;

}