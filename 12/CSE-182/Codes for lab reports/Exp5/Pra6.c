#include <stdio.h>

int main ()
{
    int n, flag, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 2) {
        sum += 2;
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
            sum += i;
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}
