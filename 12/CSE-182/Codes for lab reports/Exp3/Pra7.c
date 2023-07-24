#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, D;

    printf("For quadratic equation ax^2 + bx + c = 0\nEnter the values for a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = b*b - 4*a*c;

    if ( D < 0 ) {
        printf("The equation has no real root.\n");
    }
    else if ( D == 0 ) {
        double x = -b / (2.0*a);

        printf("The root of the equation is %lf\n", x);
    } else {
        double x1 = (-b + sqrt(D))/(2.0*a);
        double x2 = (-b - sqrt(D))/(2.0*a);
        
        printf("The roots of the equation are %lf and %lf\n", x1, x2);
    }


    return 0;
}
