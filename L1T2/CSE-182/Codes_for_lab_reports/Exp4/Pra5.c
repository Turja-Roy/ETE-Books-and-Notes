#include <stdio.h>

int main()
{
    int num, cnt=0;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) { num = 0 - num; }

    while (num > 0) {
        cnt++;
        num /= 10;
    }

    printf("Number of digits: %d\n", cnt);

    return 0;
}
