#include <stdio.h>

int main(void) {
  int int1, int2, int3, int4, higher1, higher2, lower1, lower2, highest, lowest;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &int1, &int2, &int3, &int4);

  if (int1 > int2) {
    higher1 = int1;
    lower1 = int2;
  } else {
    higher1 = int2;
    lower1 = int1;
  }

  if (int3 > int4) {
    higher2 = int3;
    lower2 = int4;
  } else {
    higher2 = int4;
    lower2 = int3;
  }

  highest = (higher1 > higher2) ? higher1 : higher2;
  lowest = (lower1 > lower2) ? lower2 : lower1;

  printf("Highest number is: %d\n", highest);
  printf("Lowest number is: %d\n", lowest);
  return 0;
}
