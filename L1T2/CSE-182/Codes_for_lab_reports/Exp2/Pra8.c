#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    year % 4 == 0 ? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year);

    return 0;
}
