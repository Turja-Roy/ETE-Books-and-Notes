#include <stdio.h>

int main()
{
    double unit, bill;

    printf("Enter the units used: ");
    scanf("%lf", &unit);

    if ( unit <= 50 ){
        bill = unit * 0.5;
        bill += bill * (0.2);
        printf("The electricity bill is Rs. %.2lf\n", bill);
    }
    else if ( unit <= 150 ){
        bill = 50*0.5 + (unit-50)*0.75;
        bill += bill * (0.2);
        printf("The electricity bill is Rs. %.2lf\n", bill);
    }
    else if ( unit <= 250 ){
        bill = 50*0.5 + 100*0.75 + (unit-150)*1.2;
        bill += bill * (0.2);
        printf("The electricity bill is Rs. %.2lf\n", bill);
    }
    else {
        bill = 50*0.5 + 100*0.75 + 100*1.2 + (unit-250)*1.5;
        bill += bill * (0.2);
        printf("The electricity bill is Rs. %.2lf\n", bill);
    }

    return 0;
}
