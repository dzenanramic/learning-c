#include <stdio.h>

int main(void)
{
    int x_value;
    int polynome;

    printf("Please enter the X value: ");
    scanf("%d", &x_value);

    // polynome = 3 * (x_value * x_value * x_value * x_value * x_value) + 2 * (x_value * x_value * x_value * x_value) - 5 * (x_value * x_value * x_value) - (x_value * x_value) + 7 * x_value - 6;

    polynome = ((((3 * x_value + 2) * x_value - 5) * x_value - 1) * x_value + 7) * x_value - 6;

    printf("The value of the polynome is: %d\n", polynome);

    return 0;
}