#include <iostream>
using namespace std;

int main ()
{
    int a[10][10], b[10][10], result[10][10], multiplied[10][10], r, c, i, j, k;

    cout << "Enter the number of rows = ";
    cin >> r;
    cout << "Enter the number of columns = ";
    cin >> c;

    cout << "Enter the first matrix elements" << endl;
    for(i=0 ; i<r ; i++) {
        for(j=0 ; j<c ; j++) cin >> a[i][j];
    }

    cout << "Enter the second matrix elements" << endl;
    for(i=0 ; i<r ; i++) {
        for(j=0 ; j<c ; j++) cin >> b[i][j];
    }

    cout << "Multiply of the matrix =" << endl;
    for(i=0 ; i<r ; i++) {
        for(j=0 ; j<c ; j++) {
            result[i][j]=0;
            for(k=0 ; k<c ; k++) {
                result[i][j]+=a[i][k]*b[k][j];
            }
            multiplied[i][j] = result[i][j];
        }
    }

    for(i=0 ; i<r ; i++) {
        for(j=0 ; j<c ; j++) cout << multiplied[i][j]<<" ";
        cout << endl;
    }

    return 0;
}
