#include <stdio.h>
int main()
{
    float radius;
    float pi = 3.14;
    printf("Enter the value for radius: ");
    scanf("%f", &radius);
    printf("The area of the volume of cylinder is  %f", radius * pi * radius);
    return 0;
}
