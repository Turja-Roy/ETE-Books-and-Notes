#include <stdio.h>

int main()
{
    double c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &c);

    f = (9.0/5.0) * (c+32);
    printf("The temperature in Farenheit = %.2lf\n", f);

    return 0;
}
