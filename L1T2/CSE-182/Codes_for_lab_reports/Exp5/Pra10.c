#include <stdio.h>

int main ()
{
    int d;
    
    X:
        printf("Enter the day number of a week (1-7): ");
        scanf("%d", &d);

    switch (d) {
        case 1:
            printf("Saturday.\n");
            break;
        case 2:
            printf("Sunday.\n");
            break;
        case 3:
            printf("Monday.\n");
            break;
        case 4:
            printf("Tuesday.\n");
            break;
        case 5:
            printf("Wednesday.\n");
            break;
        case 6:
            printf("Thursday.\n");
            break;
        case 7:
            printf("Friday.\n");
            break;
        default:
            printf("Invalid input. Enter a number between 1 and 7.\n\n");
            goto X;
    }

    return 0;
}
