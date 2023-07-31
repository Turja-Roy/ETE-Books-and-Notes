#include <stdio.h>

int main()
{
    int num, tmp, rev=0, rem;

    printf("Enter an integer: ");
    scanf("%d", &num);
    tmp = num;

    while (tmp != 0){
        rem = tmp % 10;
        rev = (rev*10) + rem;
        tmp /= 10;
    }

    printf("Reversed number = %d\n", rev);

    if (num == rev) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}
