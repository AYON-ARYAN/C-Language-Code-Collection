#include <stdio.h>

int main()
{
    double l, b, area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%lf", &l);

    printf("Enter the breadth of the rectangle: ");
    scanf("%lf", &b);

    area = l * b;
    perimeter = 2 * (l + b);

    printf("Area of the rectangle: %lf\n", area);
    printf("Perimeter of the rectangle: %lf\n", perimeter);

    if (area > perimeter)
    {
        printf("The area is greater than the perimeter.\n");
    }
    else
    {
        printf("The area is not greater than the perimeter.\n");
    }

    return 0;
}
