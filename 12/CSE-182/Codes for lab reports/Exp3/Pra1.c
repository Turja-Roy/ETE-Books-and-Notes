#include <stdio.h>

int main()
{
    int a, b, c, max=0;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > max){
        max = a;
    }
    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }

    printf("The maximum between %d, %d, and %d is %d.\n", a, b, c, max);

    return 0;
}
