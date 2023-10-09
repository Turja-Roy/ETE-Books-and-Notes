#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int r1, c1, sca;

    cout << "Enter number of rows of matrix A: "; cin >> r1;
    cout << "Enter number of columns of matrix A: "; cin >> c1;
    vector<vector<int>> A(r1, vector<int> (c1));

    cout << "Enter matrix A:" << endl;
    for (int i=0; i<r1 ; i++) {
        for (int j=0; j<c1; j++) cin >> A[i][j];
    }

    cout << "Enter the scalar to multiply: "; cin >> sca;

    for (int i=0; i<r1 ; i++) {
        for (int j=0; j<c1; j++) cout << A[i][j] * sca << "\t";
        cout << endl;
    }
    
    return 0;
}
