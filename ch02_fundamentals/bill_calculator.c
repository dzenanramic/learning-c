#include <stdio.h>

int main(void)
{
    int amount;
    int num_of_20;
    int num_of_10;
    int num_of_5;
    int num_of_1;

    printf("Enter a dollar amount: ");

    scanf("%d", &amount);

    num_of_20 = amount / 20;
    num_of_10 = (amount - (num_of_20 * 20)) / 10;
    num_of_5 = (amount - (num_of_20 * 20) - (num_of_10 * 10)) / 5;
    num_of_1 = (amount - (num_of_20 * 20) - (num_of_10 * 10) - (num_of_5 * 5));

    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", num_of_20, num_of_10, num_of_5, num_of_1);

    return 0;
}