#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a>b) ? printf("Max = %d\n", a) : printf("Max = %d\n", b);

    return 0;
}
