#include <stdio.h>

int main() {
    int LENGTH, BREDTH; 

    printf("WHAT IS THE LENGTH OF RECTANGLE\n");
    scanf("%d", &LENGTH); 

    printf("WHAT IS THE BREADTH OF THE RECTANGLE\n"); 
    scanf("%d", &BREDTH); 

    printf("The area of the rectangle is %d\n", LENGTH * BREDTH);
    printf("The perimeater of the rectangle is %d\n", LENGTH + BREDTH + LENGTH + BREDTH);
    return 0;
}
