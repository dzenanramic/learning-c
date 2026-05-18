#include <stdio.h>

#define SIZE 5

int main(void) {

  int num, quotient, reminder;
  int reminders_array[SIZE];
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  for (int i = SIZE - 1; i >= 0; i--) {
    reminder = num % 8;
    num = num / 8;
    reminders_array[i] = reminder;
  }

  printf("This is your octal based nuber: ");
  for (int i = 0; i < SIZE; i++) {
    printf("%d", reminders_array[i]);
  }
  printf("\n");

  return 0;
}
