#include <iostream>
using namespace std;

int addition(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int var1, var2;

    cout << "Enter number 1: " << endl;
    cin >> var1;
    cout << "Enter number 2: " << endl;
    cin >> var2;

    int res = addition(var1, var2);

    cout << "Output: "  <<  res;

    return 0;
}
