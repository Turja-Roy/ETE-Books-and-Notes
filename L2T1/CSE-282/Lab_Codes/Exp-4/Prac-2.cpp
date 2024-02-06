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

    for (int i=5 ; i>=0 ; i--) {
        num.push(i);
        fact.push(factorial(i));
    }

    while (!num.empty()) {
        cout << "Factorial : " << num.top() << " = " << fact.top() << endl;
        num.pop();
        fact.pop();
    } cout << endl;

    return 0;
}
