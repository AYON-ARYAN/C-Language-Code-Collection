#include <stdio.h>
#include <string.h>

int main() {
    char h[10];
    char d[10] = "Excellent";
    char e[10] = "Poor";
    char f[10] = "Female";
    char g[10] = "Male";
    char i[10];

    int a, b, c;

    printf("Enter the Health condition (Excellent/Poor): ");
    scanf("%s", h);

    printf("Enter Age: ");
    scanf("%d", &a);

    printf("Enter Gender (Male/Female): ");
    scanf("%s", i);

    if (strcmp(h, d) == 0 && a > 25 && a < 35) {
        if (strcmp(i, g) == 0) {
            b = 200000;
            c = 200 * 4;
            printf("Policy Amount: %d\n", b);
            printf("Premium: %d\n", c);
        } else if (strcmp(i, f) == 0) {
            b = 100000;
            c = 100 * 3;
            printf("Policy Amount: %d\n", b);
            printf("Premium: %d\n", c);
        } else {
            printf("Invalid gender input.\n");
        }
    } else {
        printf("Health condition, age, or age range does not meet the criteria.\n");
    }

    return 0;
}