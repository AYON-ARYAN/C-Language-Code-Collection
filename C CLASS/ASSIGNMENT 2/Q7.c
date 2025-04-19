#include <stdio.h>

int main()
{
    int h, l, b;
    printf("Give the length of the cube :");
    scanf("%d", &l); 
    printf("\nGive the height of the cube:");
    scanf("%d", &h);
    printf("\nGive the bredth of the cube :");
    scanf("%d", &b);
    float volume = (h * b * l);
    printf("\nThe volume of the cube is : %f3 ",volume);
    return 0;
}