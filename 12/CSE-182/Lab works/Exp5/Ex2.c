#include <stdio.h>

int main()
{
    int i;

    for (i=0 ; i<10 ; i++) {
        printf("%d ", i);
        if (i == 6) {
            break;
        }
    }
    
    printf("\nCame outside of loop when i = %d\n", i);

    return 0;
}
