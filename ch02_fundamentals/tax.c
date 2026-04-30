#include <stdio.h>

#define TAX 0.05

int main(void)
{
    float entered_amount;
    float tax_amount;
    float returned_amount;

    printf("Please input the amount: ");
    scanf("%f", &entered_amount);

    tax_amount = entered_amount * TAX;
    returned_amount = tax_amount + entered_amount;

    printf("Taxed amount is %.2f \n", returned_amount);

    return 0;
}