#include <stdio.h>

int main()
{
    int num, tmp, rev=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (tmp=num ; tmp>0 ; tmp/=10) {
        rev = rev*10 + tmp % 10;
    }

    if (rev == num) {
        printf("The number %d is a palindrome\n", num);
    }
    else {
        printf("The number %d is not a palindrome\n", num);
    }

    return 0;
}
