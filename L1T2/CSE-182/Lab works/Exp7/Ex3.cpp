#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int first, last, mid, item, n;

    cout << "Enter the number of elements: ";
    cin >> n;
    vector <int> arr(n);
    // 11 22 30 33 40 44 55 60 66 77 80 88 99

    cout << "Enter the array: ";
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }
    cout << "Enter the item to search: ";
    cin >> item;

    first = 0, last = n-1;
    mid = int ((first + last) / 2);
    cout << "Mid: " << mid << endl;

    while (first < last && arr[mid] != item) {
        if (item < arr[mid]) {
            last = mid-1;
        } else {
            first = mid+1;
        }
        mid = int ((first + last) / 2);
        cout << "Mid: " << mid << endl;
    }

    if (item == arr[mid]) {
        cout << item << " found in location " << mid+1 << endl;
    } else {
        cout << item << " not found in the array." << endl;
    }

    return 0;
}
