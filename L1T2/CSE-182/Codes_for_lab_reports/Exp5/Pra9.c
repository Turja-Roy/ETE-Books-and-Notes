#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    long long int *fib;

    printf("Enter a number: ");
    scanf("%d", &n);

    fib = (long long int *)malloc((n+1) * sizeof(long long int));
    fib[0] = 0;
    fib[1] = 1;

    for (int i=2 ; i<=n ; i++) {
        fib[i] = fib[i-1] + fib[i-2] ;
    }

    printf("The first %d fibonacci numbers:\n", n);
    for (int i=1 ; i<=n ; i++) {
        printf("%lld ", fib[i]);
    }
    printf("\n");

    free(fib);
    return 0;
}
