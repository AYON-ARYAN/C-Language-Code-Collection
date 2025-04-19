#include <stdio.h>

int main()
{
    int i, r, sum = 0, num;

    printf("What is the number you want to verify: ");
    scanf("%d", &num);
    // 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153.

    i = num;
    while (i > 0)
    {
        r = i % 10;
        sum += r * r * r;
        i = i / 10;
    }

    if (num == sum)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
// The program asks the user for a number, and you input 153.
// The number 153 is stored in both i and num.
// The code then enters a while loop to process the digits of the number.
// In the first iteration, r is set to 153 % 10, which is 3.
// The cube of 3 is added to the sum, making it 27.
// The last digit is removed from i, which becomes 15.
// In the second iteration, r is set to 15 % 10, which is 5.
// The cube of 5 is added to the sum, making it 152.
// The last digit is removed from i, which becomes 1.
// In the final iteration, r is set to 1 % 10, which is 1.
// The cube of 1 is added to the sum, making it 153.
// The last digit is removed from i, which becomes 0.
// The while loop exits because i is no longer greater than 0.
// The code then checks if num (which is 153) is equal to sum (which is also 153).
// Since num and sum are equal, it prints that 153 is an Armstrong number.