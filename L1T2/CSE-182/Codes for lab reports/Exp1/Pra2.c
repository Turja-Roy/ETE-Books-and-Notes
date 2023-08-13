#include <stdio.h>
#include <math.h>

int main()
{
    float r, area, pi=acos(0);

    r = 5.0;
    area = pi * r * r;

    printf("Area of the circle having a radius %.2f is %.4f\n", r, area);

    return 0;
}
