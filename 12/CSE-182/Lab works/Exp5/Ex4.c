#include <stdio.h>

int main()
{
    char ch='B';

    switch (ch) {
        case 'A':
            printf("CaseA\n");
            break;
        case 'B':
            printf("CaseB\n");
            break;
        case 'C':
            printf("CaseC\n");
            break;
        default:
            printf("Default\n");
    }

    return 0;
}
