#include <iostream>
using namespace std;

int addition()
{
    int num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    return num1 + num2;
}

int main ()
{
    int s;
    s = addition();

    cout << "Output: " << s << endl;

    return 0;
}
