#include <stdio.h>

int main()
{
    double a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if ( ( a+b>c && b+c>a) && c+a>b ) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
