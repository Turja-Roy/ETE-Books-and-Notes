#include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n, max, max2;
    max = max2 = INT16_MIN;

    cout << "Enter the array length: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the array: ";
    for (int i=0; i<n; i++) cin >> arr[i];

    for (int i=0; i<n; i++) {
        if (max < arr[i]) {
            max2 = max;
            max = arr[i];
        }
        else if (max2 < arr[i] && max != arr[i]) max2 = arr[i];
    }

    if (max2 == INT16_MIN) cout << "There is no second largest element" << endl; 
    else cout << "The second largest element is: " << max2 << endl;


    return 0;
}
