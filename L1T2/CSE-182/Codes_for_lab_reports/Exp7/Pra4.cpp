#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter the array length: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the array: ";
    for (int i=0; i<n; i++) cin >> arr[i];

    set<int> arr2(arr.begin(), arr.end());
    cout << "Unique elements of the array:" << endl;
    for (int i : arr2) cout << i << " ";
    cout << endl;

    return 0;
}
