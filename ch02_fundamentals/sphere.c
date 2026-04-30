#include <stdio.h>

#define PI 3.14

int main(void)
{
    int radius;
    float volume;

    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);

    volume = 4.0f / 3.0f * PI * (radius * radius * radius);

    printf("Volume of sphere with %d radius is: %.2f \n", radius, volume);

    return 0;
}