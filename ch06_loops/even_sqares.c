#include <stdio.h>

int main(void) {

  int n, sqared;

  printf("Enter the number: ");
  scanf("%d", &n);

  for (int i = 2; i <= n; i = i + 2) {
    sqared = i * i;
    printf("%d\n", sqared);
  }

  return 0;
}
