#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        printf("%d\n", num);
        --num;
    }

    return 0;
}
