#include <stdio.h>
#include <string.h>

int main() {
    char w[50];

    printf("Enter a word to check if it is a Fibonacci word: ");
    scanf("%s", w);


    char a[50] = "a";
    char b[50] = "b";

    while (strlen(w) > strlen(b)) {

        char temp[50];
        strcpy(temp, b);
        strcat(b, a);
        strcpy(a, temp);
    }

    if (strcmp(w, b) == 0) {
        printf("%s is a Fibonacci word!\n", w);
    } else {
        printf("%s is not a Fibonacci word.\n", w);
    }

    return 0;
}
