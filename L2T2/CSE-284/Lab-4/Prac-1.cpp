#include <bits/stdc++.h>
using namespace std;

class base {
protected:
    int num1, num2;
public:
    base (int num1, int num2) {
        this->num1 = num1;
        this->num2 = num2;
    }
};

class adder : private base {
private:
    int sum;
public:
    adder (int num1, int num2) : base(num1, num2) {
        sum = num1 + num2;
    }

    int getSum () {
        return sum;
    }
};

int main ()
{
    adder a(5, 10);

    cout << "Sum: " << a.getSum() << endl;

    return 0;
}
