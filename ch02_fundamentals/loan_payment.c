#include <stdio.h>

int main(void)
{
    float loan;
    float payment;
    float interest;
    float monthly_interest;
    int month_numbers;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of months for the report: ");
    scanf("%d", &month_numbers);

    monthly_interest = (interest / 100.0f) / 12.0f;

    for (int i = 1; i <= month_numbers; i++)
    {
        loan = loan + (loan * monthly_interest);
        loan -= payment;
        printf("Balance remaining after payment number %d: $%.2f \n", i, loan);
    }

    return 0;
}