#include <stdio.h>

int main(void) {

  int hour, minutes, new_hour, is_PM;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minutes);

  if (hour > 12) {
    new_hour = hour - 12;
    is_PM = 1;
  } else {
    is_PM = 0;
    new_hour = hour;
  }

  if (hour == 0) {
    new_hour = 12;
    is_PM = 0;
  }

  if (hour == 12) {
    is_PM = 1;
  }

  printf("Equivalent 12-hour time: %d:%02d %s\n", new_hour, minutes,
         is_PM ? "PM" : "AM");

  return 0;
}
