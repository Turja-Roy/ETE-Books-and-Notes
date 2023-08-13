#include <stdio.h>

int main()
{
    double marks;

    printf("Enter your marks: ");
    scanf("%lf", &marks);

    if ( marks>100 || marks <0 ){
        printf("Invalid input.\n");
    } else if ( marks >= 80 ){
        printf("Result: A+\n");
    } else if ( marks >= 75 ){
        printf("Result: A\n");
    } else if ( marks >= 70 ){
        printf("Result: A-\n");
    } else if ( marks >= 65 ){
        printf("Result: B+\n");
    } else if ( marks >= 60 ){
        printf("Result: B\n");
    } else if ( marks >= 55 ) {
        printf("Result: B-\n");
    } else if ( marks >= 50 ) {
        printf("Result: C+\n");
    } else if ( marks >= 45 ) {
        printf("Result: C\n");
    } else if ( marks >= 40 ) {
        printf("Result: D\n");
    } else {
        printf("Result: F\n");
    }

    return 0;
}
