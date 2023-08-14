#include <stdio.h>

int main ()
{
    double array[100];
    int q;

    printf("Enter some numbers (99.99 to quit):\n");
    for (int i=0 ; i<100 ; i++) {
        scanf("%lf", &array[i]);
        if (array[i] == 99.99) {
            q = i;
            break;
        }
    }

    for (int i=0 ; i<q ; i++) {
        if (array[i] < 0) {
            printf("%.0lf ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
