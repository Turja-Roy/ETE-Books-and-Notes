#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int tmp, n;

    cout << "Enter the number of elements: ";
    cin >> n;
    vector <int> arr(n);

    cout << "Enter the array: ";
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    int i, j, k;
    for (i=0 ; i<n ; i++) {
        for (j=0 ; j<n ; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        cout << "Iteration: " << i+1 << " " << "Pass --> " << j+1 << endl;
        for (k=0 ; k<n ; k++){
            cout << arr[k] << " ";
        }
        cout << endl;
        }

    }

    cout << "Sorted array :" << endl;

    for (int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
