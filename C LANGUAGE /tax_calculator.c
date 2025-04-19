// #include <stdio.h>

// int main() 
// {
//     float tax = 0, income;
//     printf("Enter your income: ");
//     scanf("%f", &income);
//     //
//     if (income >= 250000 && income <= 500000) {
//         tax = 0.05 * (income - 250000);
//     }
//     //
//     else if (income > 500000 && income <= 1000000) {
//         tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
//     }
//     //
//     else if (income > 1000000) {
//         tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
//     }
//     //
    
//     printf("Income: %.2f\nTax: %.2f\n", income, tax);
//     return 0;
// }


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() 
{
    
    const float standardDeduction = 50000.0;
    const float taxRates[] = {0.05, 0.2, 0.3}; 
    const float incomeBrackets[] = {250000.0, 500000.0, 1000000.0}; 

    float income, tax, cess;

   
    printf("Enter your income: ");
    scanf("%f", &income);


    income -= standardDeduction;


    if (income <= 0) {
        tax = 0;
    } 
    else {
        int i;
        for (i = 0; i < 3; i++) {
            if (income <= incomeBrackets[i]) {
                tax = taxRates[i] * income;
                break;
            } 
            else {
                tax += taxRates[i] * (incomeBrackets[i] - (i > 0 ? incomeBrackets[i - 1] : 0));
            }
        }
        

        cess = 0.04 * tax;
        

        tax += cess;
    }


    printf("Income: %.2f\nTax: %.2f\n", income + standardDeduction, tax);

    return 0;
}
