#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    void area_perimeter () {
        cout << "Enter the length: "; cin >> length;
        cout << "Enter the width: "; cin >> width;

        cout << "Area: " << length * width << endl;
        cout << "Perimeter: " << 2 * (length + width) << endl;
    }
};

int main ()
{
    Rectangle r;

    r.area_perimeter();

    return 0;
}
