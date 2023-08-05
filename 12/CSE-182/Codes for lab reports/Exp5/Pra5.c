#include <stdio.h>

int main ()
{
    int n, flag;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 2) {
        printf("2\n");
    }
    for (int i=3 ; i<=n ; i++) {
        flag = 1;
        for (int j=2 ; j*j <= i+1 ; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d\n", i);
        }
    }

    return 0;
}
