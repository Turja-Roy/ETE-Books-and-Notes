#include<iostream>
using namespace std;

int main()
{
    int arr[10][10];
    int row, col, total_row, total_col, isupper = 1;

    cout<<"Enter the rows and columns: ";
    cin>>total_row>>total_col;
    for(row=0; row<total_row; row++) {
        for(col=0; col<total_col; col++) cin>>arr[row][col];
    }

    for(row=0; row<total_row; row++) {
        for(col=0; col<total_col; col++) {
            if(col<row && arr[row][col]!=0) isupper = 0;
        }
    }
    if(isupper == 1) {
        cout<<"\nThe matrix is Upper triangular matrix."<<endl;
    } else {
        cout<<"\nThe matrix is not Upper triangular matrix."<<endl;
    }
    
    return 0;
}
