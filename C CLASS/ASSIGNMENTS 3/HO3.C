#include <stdio.h>

int main()
{
    int stock, order;
    char credit;


    printf("Enter the available stock quantity: ");
    scanf("%d", &stock);

    printf("Enter the customer's order quantity: ");
    scanf("%d", &order);

    printf("Is the customer's credit OK? (Y for Yes, N for No): ");
    scanf(" %c", &credit); 

 
    if (order <= stock && credit == 'Y')
    {
        printf("Supply the customer's order. Requirement met.\n");
    }
    else if (credit == 'N')
    {
        printf("Credit is not OK. Do not supply. Send an intimation.\n");
    }
    else if (credit == 'Y' && order > stock)
    {
        printf("Credit is OK, but the item in stock is less than the order. Supply what is in stock and intimate the balance to be shipped.\n");
    }
    else
    {
        printf("Invalid input or policy not covered by the provided rules.\n");
    }

    return 0;
}
