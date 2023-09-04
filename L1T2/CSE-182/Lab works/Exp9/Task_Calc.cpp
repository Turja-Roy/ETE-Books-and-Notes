#include <iostream>
using namespace std;

int args_ret_add(int a, int b);
int args_ret_sub(int a, int b);
int args_ret_mul(int a, int b);
double args_ret_div(int a, int b);

int main ()
{
    int a, b;
    char op;

    cout << "Enter the values of a and b: ";
    cin >> a >> b;
    cout << "Enter the intended operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "a + b = " << args_ret_add(a, b) << endl;
            break;
        case '-':
            cout << "a - b = " << args_ret_sub(a, b) << endl;
            break;
        case '*':
            cout << "a * b = " << args_ret_mul(a, b) << endl;
            break;
        case '/':
            cout << "a / b = " << args_ret_div(a, b) << endl;
            break;
        default:
            cout << "Can't identify operator!" << endl;
            break;
    }

    return 0;
}

int args_ret_add (int a, int b) {
    return a+b;
}
int args_ret_sub (int a, int b) {
    return a-b;
}
int args_ret_mul (int a, int b) {
    return a*b;
}
double args_ret_div (int a, int b) {
    return (double) a/b;
}
