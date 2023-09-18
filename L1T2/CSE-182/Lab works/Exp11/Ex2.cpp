#include <iostream>
using namespace std;

double fibnth(int n);
double printfib(double n);

int main ()
{
    double num;
    cout << "Enter a num: ";
    cin >> num;

    if (num > 0) {
        cout << "Fibonacci series till " << num << "th element:" << endl;
        printfib(num);
    } else if (num <= 0) {
        cout << "Error! Enter an integer." << endl;
    }

    cout << "The second approach:" << endl;

    for (double i=0; i<num; i++) {
        cout << fibnth(i) << " ";
    }
    cout << endl;

    return 0;
}

double fibnth(int n)
{
    if (n == 0 || n == 1) {
        return n;
    }

    return (fibnth(n-1) + fibnth(n-2));
}

double printfib(double n)
{
    int first=0, second=1;

    if(n >= 1) {
        cout << first;
    }
    if(n >= 2) {
        cout << " " << second;
    }
    for(double i=3; i<=n; i++) {
        int third = first + second;
        cout << " " << third;
        first = second;
        second = third;
    }

    cout << endl;

    return 0;
}
