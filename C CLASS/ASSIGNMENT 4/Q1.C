#include <stdio.h>

int main() {
    char m, gender;
    int age;

 
    printf("Enter marital status (M for married, U for unmarried): ");
    scanf(" %c", &m);  

    printf("Enter sex (M for male, F for female): ");
    scanf(" %c", &gender);

    printf("Enter age: ");
    scanf("%d", &age);

    
    if (m == 'M' || (m == 'U' && ((gender == 'M' && age > 30) || (gender == 'F' && age > 25)))) {
        printf("The driver is insured.\n");
    } else {
        printf("The driver is not insured.\n");
    }

    return 0;
}