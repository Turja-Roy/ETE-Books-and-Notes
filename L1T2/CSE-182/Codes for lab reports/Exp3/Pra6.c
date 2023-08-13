#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if ( ( a+b<c || b+c<a) || c+a<b ){
        printf("The triangle is not valid.\n");
    }
    else if ( a==b && a==c ){
        printf("The triangle is equilateral.\n");
    } else if ( (a==b || a==c) || b==c ) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}
