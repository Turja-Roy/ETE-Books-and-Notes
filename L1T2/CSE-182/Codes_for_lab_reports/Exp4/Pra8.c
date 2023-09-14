#include <stdio.h>

int main()
{
    int num, rev=0;
    int neg=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) { 
        num = 0 - num;
        neg = 1;
    }

    for ( ; num>0 ; num/=10) {
        rev *= 10;
        rev += num % 10;
    }

    if (neg == 1){
        rev = 0 - rev;
    }

    printf("Reverse of the number = %d\n", rev);

    return 0;
}
