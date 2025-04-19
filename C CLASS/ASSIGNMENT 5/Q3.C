#include <stdio.h>

int main() {
    char le;

    printf("Enter a character: ");
    scanf(" %c", &le);  

    switch (le) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a Vowel.\n", le);
            break;
        default:
            printf("%c is a Consonant.\n", le);
    }

    return 0;
}
