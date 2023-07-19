#include <stdio.h>

int main()
{
    double a, b, c, d;
    double ratio;

    printf("Enter four integer values: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if (c-d != 0){
        ratio = (a+b)/(c-d);
        printf("Ratio = %lf\n", ratio);
    }

    return 0;
}
