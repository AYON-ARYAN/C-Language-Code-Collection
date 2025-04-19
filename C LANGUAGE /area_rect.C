#include <stdio.h>

int main() {
    int LENGTH, BREDTH; // Declare LENGTH and BREDTH variables

    printf("WHAT IS THE LENGTH OF RECTANGLE\n");
    scanf("%d", &LENGTH); // Read the length and store it in LENGTH

    printf("WHAT IS THE BREADTH OF THE RECTANGLE\n"); // Corrected the typo in "BREADTH"
    scanf("%d", &BREDTH); // Read the breadth and store it in BREDTH

    printf("The area of the rectangle is %d\n", LENGTH * BREDTH);
    return 0;
}
