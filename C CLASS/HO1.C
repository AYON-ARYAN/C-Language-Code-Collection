#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf(" %c", &c);  

    int ascii_value = (int)c;

    if ((ascii_value >= 65 && ascii_value <= 90)) {
        printf("%c is a capital letter.\n", c);
    } else if (ascii_value >= 97 && ascii_value <= 122) {
        printf("%c is a small case letter.\n", c);
    } else if (ascii_value >= 48 && ascii_value <= 57) {
        printf("%c is a digit.\n", c);
    } else if ((ascii_value >= 0 && ascii_value <= 47) || (ascii_value >= 58 && ascii_value <= 64) ||
               (ascii_value >= 91 && ascii_value <= 96) || (ascii_value >= 123 && ascii_value <= 127)) {
        printf("%c is a special charecters.\n", c);
    } else {
        printf("%c is not within the defined ranges.\n", c);
    }

    return 0;
}
