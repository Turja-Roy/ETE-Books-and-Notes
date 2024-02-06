#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main ()
{
    queue<int> q;

    for (int i=10 ; i<=100 ; i+=10) q.push(i);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    } cout << endl;

    return 0;
}
