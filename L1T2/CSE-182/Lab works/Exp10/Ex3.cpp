#include <iostream>

using namespace std;

void swap(int *n1, int *n2);

int main ()
{
    int num1=20, num2=40;

    swap(&num1, &num2);

    cout << "Num1 = " << num1 << endl;
    cout << "Num2 = " << num2 << endl;

    return 0;
}

void swap(int *n1, int *n2) {
    int tmp;
    tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
