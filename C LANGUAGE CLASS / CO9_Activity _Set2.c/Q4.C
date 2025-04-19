#include <stdio.h>

typedef struct _triangle
{
    int base, altitude, area;
} Triangle;

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%d", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%d", &t.altitude);

    return t;
}

void find_area(Triangle *t)
{
    t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t)
{
    printf("\nTriangle Details:\n");
    printf("Base: %d\n", t.base);
    printf("Altitude: %d\n", t.altitude);
    printf("Area: %d\n", t.area);
}

int main()
{

    Triangle myTriangle;

    myTriangle = input_triangle();

    find_area(&myTriangle);

    output(myTriangle);

    return 0;
}
