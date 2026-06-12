#include <stdio.h>

int main(void) {

  float largest_number = 0, new_number;

  while (1) {
    printf("Enter a number: ");
    scanf("%f", &new_number);

    if (new_number > largest_number) {
      largest_number = new_number;
    }

    if (new_number == 0 || new_number < 0) {
      break;
    }
  }

  printf("Largest number is: %.2f\n", largest_number);
  return 0;
}
