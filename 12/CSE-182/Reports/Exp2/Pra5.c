#include <stdio.h>

int main()
{
    int nday, year, month, week, day;

    printf("Enter number of days: ");
    scanf("%d", &nday);

    year = nday / 365;
    nday -= year * 365;

    month = nday / 30;
    nday -= month * 30;

    week = nday / 7;
    day = nday - week*7;

    printf("%d = %d year %d month %d week %d day\n", nday, year, month, week, day);

    return 0;
}
