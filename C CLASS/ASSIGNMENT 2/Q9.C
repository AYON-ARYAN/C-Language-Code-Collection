#include <stdio.h>
#include <math.h>
int main()
{
    float a = 3.14;
    float r, h;

    printf("What is the value of radius of the cylinder=");
    scanf("%f", &r);

    printf("What is the value of height of he cylinder=");
    scanf("%f", &h);

    printf("The volume of cylinder is %f", a * r * r * h);

    return 0;
}