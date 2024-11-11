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

    double calculateArea () {
        return length * height;
    }
};

int main ()
{
    Rectangle r1(10.5, 8.6);
    Rectangle r2(8.5, 6.3);

    cout << "Area of Rectangle 1: " << r1.calculateArea() << "\n";
    cout << "Area of Rectangle 2: " << r2.calculateArea() << "\n";

    return 0;
}
