#include <iostream>
#include <math.h>
using namespace std;

#define PI acos(0);

int dia (int r);
double circum (int r);
double area (int r);

int main ()
{
    int r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    cout << "Diameter = " << dia(r) << endl;
    cout << "Circumference = " << circum(r) << endl;
    cout << "Area = " << area(r) << endl;

    return 0;
}

int dia (int r) {
    return 2*r;
}

double circum (int r) {
    return 2 * r * PI;
}

double area (int r) {
    return r * r * PI;
}
