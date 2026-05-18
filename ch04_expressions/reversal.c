#include <stdio.h>

int main(void) {
  int num1, num2, num3, inputNum;
  printf("Enter a three-digit number: ");
  scanf("%d", &inputNum);

  num1 = inputNum / 100;
  num2 = (inputNum / 10) % 10;
  num3 = inputNum % 10;

  printf("The reversal is: %d%d%d\n", num3, num2, num1);

  return 0;
}
