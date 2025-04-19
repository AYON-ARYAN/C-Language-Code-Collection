#include <stdio.h>

int main()
{
    int i;
    printf("Give a number value\n");
    scanf("%d",&i);
    do
    {
        printf("the value of i is %d\n", i);
        if(i<=10){
            break;
        }
        i++;
    } while (i < 100);
    return 0;
}