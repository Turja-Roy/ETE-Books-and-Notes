#include <stdio.h>

int fact(int n);

int main ()
{
    int num, tmp, sum_fact=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (tmp=num ; tmp>0 ; tmp/=10) {
        sum_fact += fact(tmp % 10);
    }

    sum_fact == num ? printf("%d is a Strong number.\n", num) : printf("%d is not a Strong number.\n", num);

    return 0;
}

int fact(int n)
{
    int f=1;
    for (int i=1 ; i <=n ; i++) {
        f *= i;
    }
    return f;
}
