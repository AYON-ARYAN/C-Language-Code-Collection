#include <stdio.h>

int main() {
    int c;
    float temp, conv_temp;

    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &c);

    if (c == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        conv_temp = (temp - 32) * 5/9;
        printf("Temperature in Celsius: %.2f\n", conv_temp);
    } else if (c == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        conv_temp = (temp * 9/5) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", conv_temp);
    } else {
        printf("Invalid choice. Please enter 1 for Fahrenheit to Celsius or 2 for Celsius to Fahrenheit.\n");
    }

    return 0;
}
