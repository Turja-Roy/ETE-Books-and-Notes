#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of the number are:");

    for (int i=1 ; i <= num ; i++) {
        if ( num % i == 0 ){
            printf(" %d", i);
        }
    }

    return 0;
}
