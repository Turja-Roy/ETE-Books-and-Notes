#include <stdio.h>

int main ()
{
    for (int i=1 ; i<=5 ; i++) {
        for (int j=1 ; j<=i ; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");

    for (int i=1 ; i<=5 ; i++) {
        for (int j=1 ; j<=i ; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");

    for (int i=5 ; i>=1 ; i--) {
        for (int j=i ; j>=1 ; j--) {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n");

    for (int i=5 ; i>=1 ; i--) {
        for (int j=i ; j>=1 ; j--) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");


    return 0;
}
