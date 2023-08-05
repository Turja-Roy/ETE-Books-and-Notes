#include <stdio.h>

int main ()
{
    int a, b;
    char op;

    X:
        printf("Enter two numbers (operands): ");
        scanf("%d %d", &a, &b);
        getchar();
        printf("Enter the operator (+, -, *, /): ");
        scanf("%c", &op);

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", a, b, a+b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a-b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a*b);
            break;
        case '/':
            printf("%d / %d = %d\n", a, b, a/b);
            break;
        default:
            printf("Sorry. Can't use the %c operator.\n\n", op);
            goto X;
    }

    return 0;
}
