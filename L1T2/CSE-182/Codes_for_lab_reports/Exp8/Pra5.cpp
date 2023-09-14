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
        cout << "Can\'t find the trace, the matrix isn\'t a square matrix" << endl;
        return 0;
    } 

    int trace = 0;
    for (int i=0; i<c; i++) {
        trace += A[i][i];
    }

    cout << "Trace = " << trace << endl;
    
    return 0;
}
