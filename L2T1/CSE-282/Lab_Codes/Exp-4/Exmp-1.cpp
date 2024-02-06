#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main ()
{
    vector<int> vec[5];
    vector<int> vec1;
    vector<string> vec2;

    for (int i=0 ; i<5 ; i++) {
        vec1.pb(i);
        vec[1].pb(i+5);
        vec2.pb("Hello");
    }

    for (auto item: vec1) cout << item << " ";
    for (auto item: vec2) cout << item << " ";

    vec[0] = vec1;
    for (auto i : vec) {
        for (auto j : i) cout << j << " ";
        cout << endl;
    }

    return 0;
}
