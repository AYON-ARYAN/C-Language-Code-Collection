#include<stdio.h>

int main(){
    int num;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &num);
    // THIS PROGRAMS RETURN 0 AS A VALUE IF THE NUMBER IS ODD OTHERWISE IT RETURNS EVEN
    printf("Divisibility test returns: %d", num %97);
    return 0;
}