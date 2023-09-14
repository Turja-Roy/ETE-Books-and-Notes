#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if( num%5==0 && num%11 ==0 ){
        printf("%d is divisible by both 5 and 11.\n", num);
    } else if ( num%5==0 && num%11 !=0 ){
        printf("%d is divisible by 5 but not by 11.\n", num);
    } else if ( num%5!=0 && num%11 ==0 ){
        printf("%d is divisible by 11 but not by 5.\n", num);
    } else {
        printf("%d is divisible by neither 5 nor 11.\n", num);
    }

    return 0;
}
