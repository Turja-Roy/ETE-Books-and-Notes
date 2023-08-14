#include <stdio.h>

int main ()
{
    int a[3][3], b[3][3], c[3][3];

    printf("Enter Matrix A:\n");
    for (int i=0 ; i<3 ; i++) {
        for (int j=0 ; j<3 ; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix B:\n");
    for (int i=0 ; i<3 ; i++) {
        for (int j=0 ; j<3 ; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i=0 ; i<3 ; i++) {
        for (int k=0 ; k<3 ; k++) {
            c[i][k] = 0;
            for (int j=0 ; j<3 ; j++) {
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }

    printf("\nC = A x B = \n");
    for (int i=0 ; i<3 ; i++) {
        for (int j=0 ; j<3 ; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
