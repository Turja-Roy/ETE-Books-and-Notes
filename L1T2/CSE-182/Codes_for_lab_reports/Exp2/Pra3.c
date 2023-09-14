#include <stdio.h>

int main()
{
    int c;
    double m, k;

    printf("Enter length in centimeter: ");
    scanf("%d", &c);

    m = c / 100.0;
    k = m / 1000.0;

    printf("%d cm = %lf m = %lf km\n", c, m, k);

    return 0;
}
