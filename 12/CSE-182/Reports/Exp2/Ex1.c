#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, peri;
    float s, area;

    printf("Enter three sides of Triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    peri = a+b+c;
    s = (a+b+c)/2.0;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Perimeter = %d\nArea = %f\n", peri, area);

    return 0;
}
