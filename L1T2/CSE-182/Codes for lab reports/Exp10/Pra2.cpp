#include <iostream>
using namespace std;

int main ()
{
    int a, b, *p1, *p2;

    cout << "Enter variable a: ";
    cin >> a;
    cout << "Enter variable b: ";
    cin >> b;

    p1 = &a;
    p2 = &b;

    cout << "Sum = a + b = " << a + b << endl;
    cout << "Sum = *p1 + *p2 = " << *p1 + *p2 << endl;

    return 0;
}
