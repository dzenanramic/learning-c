#include <stdio.h>

int main(void) {
  int start, days_in_month, day = 1;

  printf("Enter number of days in the month: ");
  scanf("%d", &days_in_month);

  printf("Enter starting day of the week (1 = Mon, 7 = Sun): ");
  scanf("%d", &start);

  for (int i = 1; day <= days_in_month; i++) {
    if (start != 1) {

      printf("%4s", " ");
      start--;
    } else {

      printf("%4d", day);
      day++;
    }
    if (i % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}
