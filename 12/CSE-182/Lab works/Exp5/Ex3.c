#include <stdio.h>

int main()
{
    int i;

    for (i=0 ; i<=20 ; i++) {
        if ( i % 5 == 0 ) {
            printf("Pass ");
            continue;
        }
        printf("%d ", i);
    }
    
    printf("\nOutside of the loop\n");

    return 0;
}
