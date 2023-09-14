#include <stdio.h>

int main()
{
    int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) { num = 0 - num; }

    last = num % 10;

    while (num > 0) {
        first = num % 10;
        num /= 10;
    }

    printf("First digit = %d\nLast digit = %d\n", first, last);

    return 0;
}
