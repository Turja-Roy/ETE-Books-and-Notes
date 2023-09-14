#include <iostream>
using namespace std;

int *bubble_sort (int *pnt, int l);

int main ()
{
    int l;
    
    cout << "Enter the length of your array: ";
    cin >> l;
    int ara[l], *p;

    cout << "Enter the values:" << endl;
    for (int i=0 ; i<l ; i++) cin >> ara[i];

    p = bubble_sort(ara, l);

    cout << "Sorted array:" << endl;
    for (int *pnt=p ; pnt!=(p+l) ; pnt++) cout << *pnt << " ";
    // for (int i : ara) cout << i << " ";

    return 0;
}

int *bubble_sort (int *pnt, int l)
{
    for (int *pnt1=pnt ; pnt1!=(pnt+l) ; pnt1++) {
        for (int *pnt2=pnt ; pnt2!=(pnt+l) ; pnt2++) {
            if (*pnt2 > *(pnt2+1)) {
                int tmp = *(pnt2+1);
                *(pnt2+1) = *pnt2;
                *pnt2 = tmp;
            }
        }
    }

    return pnt;
}
