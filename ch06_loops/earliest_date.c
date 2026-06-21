#include <stdio.h>

int main(void) {

  int new_date, max_date = 99999999, m, d, y, pm, pd, py;

  while (1) {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    new_date = (y * 100000) + (m * 1000) + (d * 10);

    if (new_date == 0) {
      break;
    }

    if (new_date < max_date) {
      max_date = new_date;
      py = y;
      pm = m;
      pd = d;
    }
  }

  printf("%d/%d/%d is the earliest date\n", pm, pd, py);

  return 0;
}
