#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, peri;
    double area, s;

    a = 5, b = 6, c = 8;
    
    peri = a + b + c;
    s = (a + b + c) / 2.0;
    area = sqrt( s*(s-a)*(s-b)*(s-c) );

    printf("A triangle has sides %d, %d, and %d\n", a, b, c);
    printf("Area of the triangle = %.4lf\n", area);
    printf("Perimeter of the triangle = %d\n", peri);

    return 0;
}
