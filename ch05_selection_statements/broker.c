#include <stdio.h>

int main(void) {
  int value, shares, price;
  float commission, rival_commission;

  printf("Enter the number of shares: ");
  scanf("%d", &shares);

  printf("Enter the price per share: ");
  scanf("%d", &price);

  value = shares * price;

  if (value < 2501) {
    commission = 30 + (value * 0.017);
  } else if (value < 6251) {
    commission = 56 + (value * 0.0066);
  } else if (value < 20001) {
    commission = 76 + (value * 0.034);
  } else if (value < 50001) {
    commission = 100 + (value * 0.0022);
  } else if (value < 500001) {
    commission = 155 + (value * 0.0011);
  } else {
    commission = 255 + (value * 0.0009);
  }

  if (shares < 2000) {

    rival_commission = 33 + (shares * 0.03);
  } else if (shares > 2000) {
    rival_commission = 33 + (shares * 0.02);
  }

  printf("Commission: $%.2f\nRival commission: $%.2f\n", commission,
         rival_commission);

  return 0;
}
