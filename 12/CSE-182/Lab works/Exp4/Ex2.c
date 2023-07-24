#include <stdio.h>

int main()
{
    int num, sum=0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(int i=1 ; i<num ; i++){
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
