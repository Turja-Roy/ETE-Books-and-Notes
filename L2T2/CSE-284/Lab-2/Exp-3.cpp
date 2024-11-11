#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    double length, height;

public:
    Rectangle (double length, double height) {
        this->length = length;
        this->height = height;
    }
    Rectangle (Rectangle &rect) {
        this->length = rect.length;
        this->height = rect.height;
    }
    void setDimensions (double length, double height) {
        this->length = length;
        this->height = height;
    }
    double getArea () {
        return length * height;
    }
};

int main ()
{
    Rectangle rect1(10.5, 8.6);
    Rectangle rect2(rect1);
    Rectangle rect3 = rect2;

    cout << "Area of rect1: " << rect1.getArea() << "\t Address: " << &rect1 << endl;
    cout << "Area of rect2: " << rect2.getArea() << "\t Address: " << &rect2 << endl;
    cout << "Area of rect3: " << rect3.getArea() << "\t Address: " << &rect3 << endl;

    rect2.setDimensions(5.5, 3.6);
    rect3 = rect2;

    cout << "Area of rect1: " << rect1.getArea() << "\t Address: " << &rect1 << endl;
    cout << "Area of rect2: " << rect2.getArea() << "\t Address: " << &rect2 << endl;
    cout << "Area of rect3: " << rect3.getArea() << "\t Address: " << &rect3 << endl;

    return 0;
}
