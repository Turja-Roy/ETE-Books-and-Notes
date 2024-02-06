#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main ()
{
    stack<int> mystack;

    for (int i=10 ; i<=100 ; i+=10) mystack.push(i);

    while (!mystack.empty()) {
        cout << mystack.top() << " ";
        mystack.pop();
    } cout << endl;

    return 0;
}
