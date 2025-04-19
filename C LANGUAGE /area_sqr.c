#include <stdio.h>
#include <math.h>

void area();

int main() {
    area();
    return 0;
}

void area() {
    int a;
    printf("What is the length of the square: ");
    scanf("%d", &a);

    double sqr = pow(a, 2); //  area

    printf("The area of the square is: %.2f\n", sqr);
}
