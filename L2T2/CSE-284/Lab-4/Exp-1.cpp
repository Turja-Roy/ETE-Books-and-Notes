#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;

public:
    void setWidth (int width) {
        this->width = width;
    }
    void setHeight (int height) {
        this->height = height;
    }
};

class Rectangle: public Shape {
public:
    int getArea () {
        return (width * height);
    }
};

int main ()
{
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(7);

    cout << "Total area: " << rect.getArea() << endl;

    return 0;
}
