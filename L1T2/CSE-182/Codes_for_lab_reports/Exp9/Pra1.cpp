#include <iostream>
using namespace std;

void narg_nret();

int narg_ret_add();
int narg_ret_sub();
int narg_ret_mul();
double narg_ret_div();

void args_nret(int a, int b);

int args_ret_add(int a, int b);
int args_ret_sub(int a, int b);
int args_ret_mul(int a, int b);
double args_ret_div(int a, int b);

int main ()
{
    { // Function 1
        cout << "Calling the function with no argument passed and returning no value..." << endl << endl;
        narg_nret();
    }

    { // Function 2
        cout << "Calling the function with no argument passed and returning a value..." << endl << endl;

        cout << narg_ret_add() << " = a + b" << endl;
        cout << narg_ret_sub() << " = a - b" << endl;
        cout << narg_ret_mul() << " = a * b" << endl;
        cout << narg_ret_div() << " = a / b" << endl;
    }

    { // Function 3
        cout << "Calling the function with two argument passed and returning no value..." << endl << endl;
        int a, b;
        cout << "Enter the values of a and b: ";
        cin >> a >> b;

        args_nret(a, b);
    }

    { // Function 4
        cout << "Calling the function with two argument passed and returning a value..." << endl << endl;
        int a, b;
        cout << "Enter the values of a and b: ";
        cin >> a >> b;

        cout << "a + b = " << args_ret_add(a, b) << endl;
        cout << "a - b = " << args_ret_sub(a, b) << endl;
        cout << "a * b = " << args_ret_mul(a, b) << endl;
        cout << "a / b = " << args_ret_div(a, b) << endl;
    }

    return 0;
}

void narg_nret () {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    cout << "a + b = " << a+b << endl;
    cout << "a - b = " << a-b << endl;
    cout << "a * b = " << a*b << endl;
    cout << "a / b = " << (double) a/b << endl;
}

int narg_ret_add () {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    return a+b;
}
int narg_ret_sub () {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    return a-b;
}
int narg_ret_mul () {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    return a*b;
}
double narg_ret_div () {
    int a, b;
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    return (double) a/b;
}

void args_nret (int a, int b) {
    cout << "a + b = " << a+b << endl;
    cout << "a - b = " << a-b << endl;
    cout << "a * b = " << a*b << endl;
    cout << "a / b = " << (double) a/b << endl;
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
