#include <iostream>
using namespace std;

class Box {
public:
	double length;
	double width;
	double height;
};

int main()
{
	Box Box1;
	Box Box2;
	double volume = 0.0;

	Box1.height = 5.0;
	Box1.length = 6.0;
	Box1.width = 7.0;

	Box2.height = 10.0;
	Box2.length = 12.0;
	Box2.width = 13.0;

	volume = Box1.height * Box1.length * Box1.width;
	cout << "Volume of Box1 : " << volume << endl;

	volume = Box2.height * Box2.length * Box2.width;
	cout << "Volume of Box2 : " << volume << endl;

	return 0;
}
