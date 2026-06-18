#include <stdio.h>

int main(void) {

  int entered_digit, remainder, reversed_digit, remainder_digit;

  printf("Enter the number: ");
  scanf("%d", &entered_digit);

  remainder = entered_digit;
  reversed_digit = 0;
  while (remainder > 0) {
    remainder_digit = remainder % 10;
    reversed_digit = (reversed_digit * 10) + remainder_digit;
    remainder = remainder / 10;
  }

  printf("Your number reversed is: %d\n", reversed_digit);

  return 0;
}
