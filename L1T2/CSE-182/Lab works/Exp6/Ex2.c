#include <stdio.h>

int main()
{
    int array[5];

    printf("Enter 5 integers: ");

    for (int i=0 ; i<5 ; ++i) {
        scanf("%d", &array[i]);
    }

    printf("Displaying integers:\n");

    for (int i=0 ; i<5 ; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
