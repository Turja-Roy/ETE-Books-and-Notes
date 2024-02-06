#include <bits/stdc++.h>
using namespace std;

int factorial (int x) {
    if (x == 0 || x == 1) return 1;

    int fact = 1;
    for (int i=1 ; i<=x ; i++) fact *= i;

    return fact;
}

int main ()
{
    stack<int> num, fact;

    cout << "Enter 6 values: ";
    for (int i=0 ; i<6 ; i++) {
        int x; cin >> x;
        num.push(x);
        fact.push(factorial(x));
    }

    while (!num.empty()) {
        cout << "Factorial : " << num.top() << " = " << fact.top() << endl;
        num.pop();
        fact.pop();
    } cout << endl;

    return 0;
}
