#include <iostream>
using namespace std;

double factorial (int n);

int main ()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}

double factorial (int n)
{
    if (n == 0 || n == 1){
        return 1;
    }

    return n * factorial(n - 1);
}
