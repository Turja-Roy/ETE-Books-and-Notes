#include <stdio.h>

int main()
{
    int n, sum=0;

    printf("Enter a natural number: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
