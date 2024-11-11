#include <bits/stdc++.h>
using namespace std;

class Cube {
    int side;
public:
    Cube () {
        cout << "Constructor called" << endl;
    }
    Cube (int side) {
        this->side = side;
        cout << "Constructor called" << endl;
    }
    ~Cube () {
        cout << "Destructor called" << endl;
    }
    void setSide (int side) {
        this->side = side;
    }
    double getVolume () {
        return side * side * side;
    }
};

int main ()
{
    Cube c1;
    Cube c2(10);

    c1.setSide(5);
    cout << "Volume of c1: " << c1.getVolume() << endl;
    cout << "Volume of c2: " << c2.getVolume() << endl;

    c2.setSide(15);
    cout << "Volume of c1: " << c1.getVolume() << endl;
    cout << "Volume of c2: " << c2.getVolume() << endl;

    return 0;
}
