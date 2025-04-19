#include <stdio.h>
#include <math.h>

void input(float *radius, float *height, float *length)
{
    printf("Enter stomach radius, height, and length (separated by spaces): ");
    scanf("%f %f %f", radius, height, length);
}

float calculate_weight(float stomach_radius, float camel_height, float camel_length)
{
    const float pi = 3.1415;
    return pi * pow(stomach_radius, 3) * sqrt(camel_height * camel_length);
}

void display(float radius, float height, float length, float weight)
{
    printf("The weight of the camel with radius: %.1f, height: %.1f, length: %.1f is %.4f\n", radius, height, length, weight);
}

int main()
{
    float radius, height, length, weight;

    input(&radius, &height, &length);

    weight = calculate_weight(radius, height, length);

    display(radius, height, length, weight);

    return 0;
}
