#include <stdio.h>

int main()
{
    double num;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if( num > 0 ){
        printf("The number is positive.\n");
    } else if( num == 0 ){
        printf("The number is zero.\n");
    } else {
        printf("The number is negative.\n");
    }


    return 0;
}
