#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main ()
{
    stack<int> stk;

    cout << "Enter 5 numbers: ";
    for (int i=0 ; i<5 ; i++) {
        int x; cin >> x;
        stk.push(x);
    }

    int sum = 0;
    cout << endl << "Calculating the summation: ";
    while (!stk.empty()) {
        sum += stk.top();
        stk.pop();
        cout << sum << " ";
    }

    cout << endl << endl << "Final summation = " << sum << endl;

    return 0;
}
