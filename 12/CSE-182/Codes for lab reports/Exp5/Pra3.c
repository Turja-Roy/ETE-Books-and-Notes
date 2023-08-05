#include <stdio.h>

int main()
{
    int a, b, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int min = (a < b) ? a : b;

    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }

    lcm = (a * b) / hcf;

    printf("The LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
