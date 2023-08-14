#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *ara1, *ara2;
    int len;

    printf("Enter the intended length of your array: ");
    scanf("%d", &len);
    ara1 = (int *)calloc(len, sizeof(int));
    ara2 = (int *)calloc(len, sizeof(int));

    printf("Enter numbers in your array:\n");
    for (int i=0 ; i<len ; i++) {
        scanf("%d", &ara1[i]);
    }

    for (int i=0 ; i<len ; i++) {
        ara2[i] = ara1[i];
    }

    printf("\nPrinting array1:\n");
    for (int i=0 ; i<len ; i++) {
        printf("%d ", ara1[i]);
    }

    printf("\nPrinting array2:\n");
    for (int i=0 ; i<len ; i++) {
        printf("%d ", ara2[i]);
    }
    printf("\n");

    return 0;
}
