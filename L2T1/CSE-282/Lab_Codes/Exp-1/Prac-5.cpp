#include <bits/stdc++.h>
using namespace std;

struct ComplexNumber {
    float real;
    float imag;
};

int main() {
    ComplexNumber c1, c2, difference;

    cout << "Enter first complex number (real and imaginary parts): ";
    cin >> c1.real >> c1.imag;

    cout << "Enter second complex number (real and imaginary parts): ";
    cin >> c2.real >> c2.imag;

    difference.real = c1.real - c2.real;
    difference.imag = c1.imag - c2.imag;

    cout << "\nDifference: " << difference.real << " + " << difference.imag << "i" << endl;

    return 0;
}
