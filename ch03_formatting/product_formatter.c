#include <stdio.h>

int main(void)
{

    int item_num, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_num);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d/", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%6.2f\t\t%.2d/%.2d/%d\n", item_num, unit_price, month, day, year);
    // printf("%d\t$%-6.2f\t%.2d/%.2d/%d\n", item_num, unit_price, month, day, year);

    return 0;
}