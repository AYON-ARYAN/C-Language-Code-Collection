#include <stdio.h>

int main() {
    int s;

    
    printf("Enter your score in the CODE STUDIO Coding Contest: ");
    scanf("%d", &s);

    
    if (s > 50 && s < 100) {
        printf("Congratulations! You get a Coding Ninjas T-shirt.\n");
    } else if (s < 50) {
        printf("You get a Diary.\n");
    } else if (s > 100) {
        printf("Congratulations! You get a Diary and a Pen.\n");
    } else {
        printf("Sorry, no prize for this score.\n");
    }

    return 0;
}
