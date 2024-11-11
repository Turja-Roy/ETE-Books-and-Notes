#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    double a, b, c;
public:
    Student () {
        a = 1;
        b = 2;
        c = 3;
    }
    Student (double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int main ()
{
    Student st1;
    Student st2(4, 5, 6);

    return 0;
}
