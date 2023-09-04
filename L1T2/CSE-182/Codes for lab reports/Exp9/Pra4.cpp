#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void find_reverse ( vector<int> v );

int main ()
{
    int l;

    cout << "Enter the length of your array: ";
    cin >> l;

    vector<int> ara(l);

    cout << "Enter the array:" << endl;

    for (int i=0; i<l; i++) cin >> ara[i];

    cout << "Reverse of the array:" << endl;

    find_reverse(ara);

    return 0;
}

void find_reverse ( vector<int> v ) {
    for (int i=v.size()-1 ; i>=0 ; i--) {
        cout << v[i] << " ";
    }
    cout << endl;
}
