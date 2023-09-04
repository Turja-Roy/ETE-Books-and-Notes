#include <iostream>
#include <vector>
using namespace std;

vector<int> vect_add (vector<int> v1, vector<int> v2);

int main()
{
    int l1, l2;

    cout << "Enter the length of array 1: ";
    cin >> l1;
    cout << "Enter the array:" << endl;

    vector<int> ara1(l1);
    for (int i=0 ; i<l1 ; i++) cin >> ara1[i];

    cout << "Enter the length of array 1: ";
    cin >> l2;
    cout << "Enter the array:" << endl;

    vector<int> ara2(l2);
    for (int i=0 ; i<l2 ; i++) cin >> ara2[i];

    if (ara1.size() != ara2.size()) {
        cout << "Can\'t add the arrays: array lengths are not equal." << endl;
        return 0;
    }

    vector<int> sum = vect_add(ara1, ara2);

    for (int x : sum) {
        cout << x << " ";
    } 
    cout << endl;

    return 0;
}

vector<int> vect_add (vector<int> v1, vector<int> v2) {
    vector<int> sum(v1.size());

    for (int i=0 ; i<v1.size() ; i++) 
        sum[i] = v1[i] + v2[i];

    return sum;
}
