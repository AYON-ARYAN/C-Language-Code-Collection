#include <stdio.h>

int main() {
    int day_no;

    
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &day_no);

    
    switch (day_no) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Please enter a number between 1 and 7.\n Don't exceed.\n");
    }

    return 0;
}
