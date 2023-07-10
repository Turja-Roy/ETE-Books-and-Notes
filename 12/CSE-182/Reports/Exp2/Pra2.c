#include <stdio.h>
#include <math.h>


int main()
{
    int r, d;
    double area, circum, pi=acos(0);

    printf("Enter the radius of a circle: ");
    scanf("%d", &r);

    d = r * 2;
    area = pi * r * 2;
    circum = 2 * pi * r;

    printf("Diameter = %d, Area = %.4lf, Circumference = %.4lf\n", d, area, circum);

    return 0;
}
