#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

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
    for (int x : arr2) {
        cout << "Frequency of " << x << " is " << count(arr.begin(), arr.end(), x) << endl;
    }

    return 0;
}
