#include <stdio.h>

int main() {
    double length1, width1, length2, width2;
    double area1, area2, perimeter1, perimeter2;

    // Input for the first rectangle
    printf("Enter the length of the first rectangle: ");
    scanf("%lf", &length1);
    printf("Enter the width of the first rectangle: ");
    scanf("%lf", &width1);

    // Input for the second rectangle
    printf("Enter the length of the second rectangle: ");
    scanf("%lf", &length2);
    printf("Enter the width of the second rectangle: ");
    scanf("%lf", &width2);

    // Calculate area and perimeter for both rectangles
    area1 = length1 * width1;
    perimeter1 = 2 * (length1 + width1);

    area2 = length2 * width2;
    perimeter2 = 2 * (length2 + width2);

    // Compare and print the results
    printf("Area of the first rectangle: %.2lf\n", area1);
    printf("Perimeter of the first rectangle: %.2lf\n", perimeter1);
    printf("Area of the second rectangle: %.2lf\n", area2);
    printf("Perimeter of the second rectangle: %.2lf\n", perimeter2);

    if (area1 > area2)
        printf("The first rectangle has a greater area.\n");
    else if (area1 < area2)
        printf("The second rectangle has a greater area.\n");
    else
        printf("Both rectangles have the same area.\n");

    if (perimeter1 > perimeter2)
        printf("The first rectangle has a greater perimeter.\n");
    else if (perimeter1 < perimeter2)
        printf("The second rectangle has a greater perimeter.\n");
    else
        printf("Both rectangles have the same perimeter.\n");

    return 0;
}
