#include <iostream>
#include <vector>
using namespace std;

int sumfunc(vector<int> ara, int l);

int main ()
{
    int l;

    cout << "Enter the length of your array: ";
    cin >> l;
    vector<int> ara(l);

    cout << "Enter the array:" << endl;
    for (int i = 0; i < l; i++) cin >> ara[i];

    cout << "Sum of the elements: " << sumfunc(ara, l) << endl;

    return 0;
}

int sumfunc(vector<int> ara, int l)
{
    if (l <= 0) {
        return 0;
    }

    return ara[l-1] + sumfunc(ara, l-1);
}
