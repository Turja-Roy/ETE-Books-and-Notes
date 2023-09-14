#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int maximum (vector <int> v);

int main ()
{
    int l;

    cout << "Enter the length of your array: ";
    cin >> l;

    vector<int> ara(l);

    cout << "Maximum element = " << maximum(ara);

    return 0;
}

int maximum (vector<int> v) {
    int max = INT16_MIN;

    for (int x : v) {
        if (x > max) max = x;
    }

    return max;
}
