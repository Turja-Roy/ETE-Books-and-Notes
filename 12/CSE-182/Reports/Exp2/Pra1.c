#include <stdio.h>

int main()
{
    int w, l, area, peri;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &w);

    area = w * l;
    peri = 2 * (w + l);

    printf("\nThe area is %d sq. unit and the perieter is %d unit\n", area, peri);

    return 0;
}
