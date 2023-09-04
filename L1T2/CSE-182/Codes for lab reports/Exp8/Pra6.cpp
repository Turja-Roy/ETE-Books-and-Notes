#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int r, c;

    cout << "Enter number of rows of the matrix: "; cin >> r;
    cout << "Enter number of columns of the matrix: "; cin >> c;
    vector<vector<int>> A(r, vector<int> (c));

    cout << "Enter the matrix:" << endl;
    for (int i=0; i<r ; i++) {
        for (int j=0; j<c; j++) cin >> A[i][j];
    }

    if ( r != c ) {
        cout << "Can\'t find the sum, the matrix isn\'t a square matrix" << endl;
    } 

    int sum = 0;
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if ( i+j == ((c+1)-2) ) sum += A[i][j];
        }
    }

    cout << "Sum of minor diagonal elements = " << sum << endl;
    
    return 0;
}
