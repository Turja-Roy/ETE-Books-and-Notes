#include <iostream>
using namespace std;

class BOX {
private:
    double length, width, height;

public:
	void input_value() {
		cout << "Enter three sides of a box: " << endl;
		cin >> length >> width >> height;
	}
	void print_value() {
		cout << "Length : " << length << endl;
		cout << "Width : " << width << endl;
		cout << "Height : " << height << endl;
	}
	double volume() {
		double v = length * width * height;
		return v;
	}
};

int main()
{
	BOX box1, box2;

	box1.input_value();
	box1.print_value();
	double vol = box1.volume();

	cout << "Volume of the box: " << vol << endl;
}
