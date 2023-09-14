#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n, min=INT16_MAX, max=INT16_MIN;

    cout << "Enter the array length: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the array: ";
    for (int i=0; i<n; i++) cin >> arr[i];
    
    for (int i=0 ; i<n ; i++) {
        if (min > arr[i]) min = arr[i];
        if (max < arr[i]) max = arr[i];
    }

    cout << "Minimum element: " << min << "\tMaximum element: " << max << endl;

    return 0;
}
