#include <stdio.h>

int main ()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i=2 ; i*i <= num+1 ; i++) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }

    printf("%d is a prime number.\n", num);

    return 0;
}
