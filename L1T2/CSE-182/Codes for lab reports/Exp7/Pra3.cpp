#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n, n_even, n_odd;

    cout << "Enter the array length: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the array: ";
    for (int i=0; i<n; i++) cin >> arr[i];

    n_even = n_odd = 0;
    for (int i=0; i<n; i++) {
        if (arr[i] % 2 == 0) n_even++;
        else n_odd++;
    }

    cout << "Number of even elements: " << n_even << endl << "Number of odd elements: " << n_odd << endl;

    return 0;
}
