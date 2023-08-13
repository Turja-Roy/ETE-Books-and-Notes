#include <stdio.h>

int main()
{
    int width, height, area, peri;

    width = 5, height = 7;

    area = width * height;
    peri = 2 * (width + height);

    printf("A rectangle consists of sides %d unit and %d unit.\n", width, height);
    printf("Area of the rectangle = %d square unit\n", area);
    printf("Perimeter of the rectangle = %d unit\n", peri);

    return 0;
}
