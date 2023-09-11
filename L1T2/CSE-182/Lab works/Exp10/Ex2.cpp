#include <iostream>

using namespace std;

int main ()
{
    int i, x[6], sum=0;

    cout << "Enter 6 numbers: ";
    for (int i=0 ; i<6 ; i++) {
        cin >> *(x+i);
        sum += *(x+i);
    }

    cout << "Sum = " << sum << endl;
    cout << *x+3 << endl;

    return 0;
}
