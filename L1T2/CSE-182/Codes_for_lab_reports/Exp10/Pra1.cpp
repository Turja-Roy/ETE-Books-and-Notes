#include <iostream>
using namespace std;

int main ()
{
    int *p, a;

    cout << "Enter the value of variable a: ";
    cin >> a;

    p = &a;

    cout << "Change the value of a to: ";
    cin >> *p;

    cout << "Present value of a: " << a << endl;
    cout << "Value of *p: " << *p << endl;

    return 0;
}
