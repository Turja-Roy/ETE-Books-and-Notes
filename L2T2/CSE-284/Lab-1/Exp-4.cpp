#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    void init (double length, double width, double height) {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    double calculateArea () {
        return length * width;
    }
    double calculateVolume () {
        return length * width * height;
    }
};

int main ()
{
    Box box1;
    Box box2;

	// box1.height = 5.0;
	// box1.length = 6.0;
	// box1.width = 7.0;

    box2.init(10, 20, 30);

    cout << "Area of box2: " << box2.calculateArea() << endl;
    cout << "Volume of box2: " << box2.calculateVolume() << endl;

    return 0;
}
