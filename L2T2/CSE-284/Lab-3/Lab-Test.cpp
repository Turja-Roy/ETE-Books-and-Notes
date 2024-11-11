#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int a, b;
    static int objCount;

public:
    Student () {
        objCount++;
    }
    Student (int a, int b) {
        this->a = a;
        this->b = b;
        objCount++;
    }

    void set_a_b (int a, int b) {
        this->a = a;
        this->b = b;
    }
    void print_state () {
        cout << "a: " << a << " b: " << b << " objCount: " << objCount << endl;
    }
};

int Student::objCount = 100;

int main ()
{
    Student s1;
    s1.set_a_b(5, 10);
    s1.print_state();

    Student s2(10, 20);
    s2.print_state();

    Student s3(15, 30);
    s3.print_state();

    return 0;
}
