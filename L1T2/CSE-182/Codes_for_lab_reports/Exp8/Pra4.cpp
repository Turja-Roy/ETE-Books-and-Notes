#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int r1, r2, c1, c2;

    cout << "Enter number of rows of matrix A: "; cin >> r1;
    cout << "Enter number of columns of matrix A: "; cin >> c1;
    vector<vector<int>> A(r1, vector<int> (c1));

    cout << "Enter matrix A:" << endl;
    for (int i=0; i<r1 ; i++) {
        for (int j=0; j<c1; j++) cin >> A[i][j];
    }

    cout << "Enter number of rows of matrix B: "; cin >> r2;
    cout << "Enter number of columns of matrix B: "; cin >> c2;
    vector<vector<int>> B(r2, vector<int> (c2));

    cout << "Enter matrix B:" << endl;
    for (int i=0; i<r2 ; i++) {
        for (int j=0; j<c2; j++) cin >> B[i][j];
    }

    if (A == B)
        cout << "The matrices are equal" << endl;
    else
        cout << "The matrices are not equal" << endl;
    
    return 0;
}