// #include <stdio.h>

// int main()
// {
//     char a[20];
//     printf("Enter the sentence\n");
//     scanf("%s", a);

//     printf("%s", a);
//     return 0;
// }


// 
#include <stdio.h>

int main() {
    char ch, line[50];
    int loc = 0;

    printf("Enter a line of text: \n");

    while ((ch = getchar()) != '\n') {
        line[loc++] = ch;
    }

    line[loc] = '\0';

    printf("The text you entered is: %s\n", line);

    return 0;
}

