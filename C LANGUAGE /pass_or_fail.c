#include <stdio.h>

int main() {
    float total;
    int physics, chemistry, maths;

    printf("ENTER TOTAL MARKS OBTAINED IN PHYSICS: ");
    scanf("%d", &physics);

    printf("ENTER TOTAL MARKS OBTAINED IN CHEMISTRY: ");
    scanf("%d", &chemistry);

    printf("ENTER TOTAL MARKS OBTAINED IN MATHEMATICS: ");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if (total < 40 || maths < 33 || chemistry < 33 || physics < 33) {
        printf("You have failed because your total percentage is less than 40 or you scored less than 33 in one of the subjects.\n");
    } else {
        printf("You have successfully passed the exam.\n");
    }

    return 0;
}