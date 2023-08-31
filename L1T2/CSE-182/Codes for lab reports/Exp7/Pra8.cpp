#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    int n, n2;

    cout << "Enter the array length: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the array: ";
    for (int i=0; i<n; i++) cin >> arr[i];

    cout << "Enter elements to append to the array (q to quit): ";
    for (istream_iterator<int> element{cin}, e ; element != e ; element++) {
        arr.push_back(*element);
    }

    cout << "Final array: " << endl;
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
