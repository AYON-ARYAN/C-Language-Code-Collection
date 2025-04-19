#include <stdio.h>

int main() {
    float h, c, t;

   
    printf("Enter hardness: ");
    scanf("%f", &h);

    printf("Enter carbon content: ");
    scanf("%f", &c);

    printf("Enter tensile strength: ");
    scanf("%f", &t);

    
    int grade = 5; 
    if (h > 50 && c < 0.7 && t > 5600) {
        grade = 10;
    } else if (h > 50 && c < 0.7) {
        grade = 9;
    } else if (c < 0.7 && t > 5600) {
        grade = 8;
    } else if (h > 50 && t > 5600) {
        grade = 7;
    } else if (h > 50 || c < 0.7 || t > 5600) {
        grade = 6;
    }

    printf("The grade of the steel is: %d\n", grade);

    return 0;
}
