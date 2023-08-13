#include <math.h>
#include <stdio.h>

int main()
{
    double a, b, c, s, peri;
    double area;

    printf("Enter three sides of triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    peri = a+b+c;
    s = peri/2.0;
    area = sqrt( s*(s-a)*(s-b)*(s-c) );

    printf("Perimeter = %.2lf\nArea = %.4lf", peri, area);

    return 0;
}
