#include <stdio.h>

int main ()
{
    int num, flag;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime factors of %d:", num);
    for (int i=2 ; i <= num ; i++) {
        if (num % i == 0) {
            flag = 1;
            for (int j=2 ; j*j <= i+1 ; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                printf(" %d", i);
            }
        }
    }
    printf("\n");

    return 0;
}
