#include <stdio.h>

int main(void) {
  int digit;

  printf("Enter a number: ");
  scanf("%d", &digit);

  if (digit < 0) {
    printf("Please enter a positive number.\n");
  } else if (digit < 10) {
    printf("The number has 1 digit\n");
  } else if (digit < 100) {
    printf("The number has 2 digits\n");
  } else if (digit < 1000) {
    printf("The number has 3 digits.\n");
  } else {
    printf("The number has 4 or more digits.\n");
  }

  return 0;
}
