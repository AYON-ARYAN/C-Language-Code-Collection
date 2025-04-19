#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, dis, c2, c1, r, i;

    printf("Enter the coefficients (a, b, c) of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    dis = b * b - 4 * a * c;

    if (dis > 0)
    {

        c2 = (-b + sqrt(dis)) / (2 * a);
        c1 = (-b - sqrt(dis)) / (2 * a);
        printf("Real and unequal roots:\n");
        printf("x1 = %.2f\nx2 = %.2f\n", c2, c1);
    }
    else if (dis == 0)
    {

        c2 = c1 = -b / (2 * a);
        printf("Real and equal roots:\n");
        printf("x1 = x2 = %.2f\n", c2);
    }
    else
    {

        r = -b / (2 * a);
        i = sqrt(-dis) / (2 * a);
        printf("Complex roots:\n");
        printf("x1 = %.2f + %.2fi\n", r, i);
        printf("x2 = %.2f - %.2fi\n", r, i);
    }

    return 0;
}
