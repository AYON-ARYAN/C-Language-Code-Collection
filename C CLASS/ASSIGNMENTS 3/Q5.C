#include <stdio.h>

int main()
{
    int subjects = 5;
    double score[subjects];
    double totals = 0;

    printf("Enter scores for 5 subjects:\n");
    for (int i = 0; i < subjects; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%lf", &score[i]);
        totals += score[i];
    }

    double avg = totals / subjects;

    printf("Average Score: %.2lf\n", avg);
    if (avg > 60)
    {
        printf("Result: First Division\n");
    }
    else if (avg >= 50 && avg <= 60)
    {
        printf("Result: Second Division\n");
    }
    else if (avg >= 40 && avg < 50)
    {
        printf("Result: Third Division\n");
    }
    else
    {
        printf("Result: Fail\n");
    }

    return 0;
}
