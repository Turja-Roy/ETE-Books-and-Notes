#include <bits/stdc++.h>
using namespace std;

class Shape {
private:
    double radius;
    double side1, side2, side3;
    double width, height;

public:
    Shape (double radius) {
        this->radius = radius;
        side1 = side2 = side3 = width = height = 0;
    }
    Shape (double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
        radius = width = height = 0;
    }
    Shape (double width, double height) {
        this->width = width;
        this->height = height;
        radius = side1 = side2 = side3 = 0;
    }

    double getArea () {
        if (radius) return calculateArea(radius);
        else if (side1 && side2 && side3) return calculateArea(side1, side2, side3);
        else if (width && height) return calculateArea(width, height);
        else return 0;
    }

    double calculateArea (double radius) {
        return 3.1416 * radius * radius;
    }
    double calculateArea (double side1, double side2, double side3) {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double calculateArea (double width, double height) {
        return width * height;
    }
};

int main ()
{
    Shape s1 = Shape(5);
    Shape s2 = Shape(3, 4, 5);
    Shape s3 = Shape(4, 5);

    cout << "Area of Circle: " << s1.getArea() << endl;
    cout << "Area of Triangle: " << s2.getArea() << endl;
    cout << "Area of Rectangle: " << s3.getArea() << endl;

    return 0;
}
