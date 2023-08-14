#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ara;
    int len, even=0, odd=0;

    printf("Enter the intended length of your array: ");
    scanf("%d", &len);
    ara = (int *)calloc(len, sizeof(int));

    printf("Enter numbers in your array:\n");
    for (int i=0 ; i<len ; i++) {
        scanf("%d", &ara[i]);
    }

    int cnt, sum=0;
    printf("How many numbers of the array do you want to add?\n");
    scanf("%d", &cnt);
    for (int i=0 ; i<cnt ; i++) {
        sum += ara[i];
    }
    printf("Sum of first %d elements of the arary = %d\n", cnt, sum);

    return 0;
}
