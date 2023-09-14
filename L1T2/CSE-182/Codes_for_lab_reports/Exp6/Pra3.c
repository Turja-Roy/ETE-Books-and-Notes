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

    for (int i=0 ; i<len ; i++) {
        if (ara[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Number of even components = %d\n", even);
    printf("Number of odd components = %d\n", odd);

    free(ara);
    return 0;
}
