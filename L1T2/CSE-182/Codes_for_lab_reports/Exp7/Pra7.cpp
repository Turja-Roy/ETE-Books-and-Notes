#include <iostream>
#include <vector>
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

    reverse(arr.begin(), arr.end());
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
