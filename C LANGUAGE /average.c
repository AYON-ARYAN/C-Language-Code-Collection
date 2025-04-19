#include <stdio.h>

float average(int a, int b, int c);

int main() {
    float a, b, c;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    
    printf("The average is %f", average(a, b, c));
    return 0;
}

float average(int a, int b, int c) {
    float ans;
    ans = (a + b + c) / 3.0; 
    return ans;
}
