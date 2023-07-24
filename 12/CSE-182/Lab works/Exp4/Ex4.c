#include <stdio.h>

int main()
{
    double num, sum=0;

    do {
        printf("Enter a number: ");
        scanf("%lf", &num);
        sum += num;
    } while( num != 0.0 );

    printf("Sum = %.2lf\n", sum);

    return 0;
}
