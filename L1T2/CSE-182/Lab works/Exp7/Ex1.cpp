#include <iostream>
using namespace std;

int main ()
{
    int arr[15], n, to_search;

    cout << "The number of elements: ";
    cin >> n;
    cout << "Enter the numbers: ";

    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    cout << "Enter the searching element: ";
    cin >> to_search;
    int loc = false;

    for (int i=0 ; i<n ; i++) {
        if(arr[i] == to_search) {
            loc = i;
            break;
        }
    }

    if (loc) {
        cout << "The element " << to_search << " is found at location " << loc+1 << endl;
    } else {
        cout << "The element " << to_search << " is not found in the array." << endl;

    }

    return 0;
}
