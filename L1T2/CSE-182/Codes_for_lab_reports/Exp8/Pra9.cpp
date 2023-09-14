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

    int zero=0, non_zero=0;

    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            A[i][j] == 0 ? zero++ : non_zero++;
        }
    }

    zero > non_zero ? cout << "The matrix is a sparse matrix" << endl : cout << "The matrix is not a sparse matrix" << endl;

    return 0;
}
