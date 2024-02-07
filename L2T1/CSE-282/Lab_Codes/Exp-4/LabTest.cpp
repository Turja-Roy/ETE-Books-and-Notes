#include <bits/stdc++.h>
using namespace std;

int main ()
{
    stack<int> stk;
    int N;

    cout << "Enter the value for N: ";
    cin >> N;

    for (int i=1 ; i<=N ; i++) stk.push(i);

    int sum(0);
    while (!stk.empty()) {
        if (stk.top() % 2 != 0) {
            sum += stk.top();
            stk.pop();
        }
        else {
            stk.pop();
        }
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
