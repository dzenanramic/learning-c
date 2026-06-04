#include <stdio.h>
#include <string.h>

int main(void) {

  int number, first, second;
  char tens[20], ones[20];

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  first = number / 10;
  second = number % 10;

  if (first > 1) {
    switch (first) {
    case 2:
      strcpy(tens, "twenty");
      break;
    case 3:
      strcpy(tens, "thirty");
      break;
    case 4:
      strcpy(tens, "forty");
      break;
    case 5:
      strcpy(tens, "fifty");
      break;
    case 6:
      strcpy(tens, "sixty");
      break;
    case 7:
      strcpy(tens, "seventy");
      break;
    case 8:
      strcpy(tens, "eighty");
      break;
    case 9:
      strcpy(tens, "ninety");
      break;
    }

    switch (second) {
    case 1:
      strcpy(ones, "one");
      break;
    case 2:
      strcpy(ones, "two");
      break;
    case 3:
      strcpy(ones, "three");
      break;
    case 4:
      strcpy(ones, "four");
      break;
    case 5:
      strcpy(ones, "five");
      break;
    case 6:
      strcpy(ones, "six");
      break;
    case 7:
      strcpy(ones, "seven");
      break;
    case 8:
      strcpy(ones, "eight");
      break;
    case 9:
      strcpy(ones, "nine");
      break;
    }
    printf("You entered the number %s-%s\n", tens, ones);

  } else {
    switch (second) {
    case 0:
      strcpy(tens, "ten");
      break;
    case 1:
      strcpy(tens, "eleven");
      break;
    case 2:
      strcpy(tens, "twelve");
      break;
    case 3:
      strcpy(tens, "thirteen");
      break;
    case 4:
      strcpy(tens, "fourteen");
      break;
    case 5:
      strcpy(tens, "fifteen");
      break;
    case 6:
      strcpy(tens, "sixteen");
      break;
    case 7:
      strcpy(tens, "seventeen");
      break;
    case 8:
      strcpy(tens, "eighteen");
      break;
    case 9:
      strcpy(tens, "nineteen");
      break;
    }
    printf("You entered the number %s\n", tens);
  }

  return 0;
}
