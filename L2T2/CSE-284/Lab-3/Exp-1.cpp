#include <iostream>
using namespace std;

class Square {
private:
    int side;
    static int objCount;

public:
    Square () {
        objCount++;
    }

    void setSide (int s) {
        side = s;
    }
    int getSide () {
        return side;
    }

    static int getCount () {
        return objCount;
    }
};

int Square::objCount = 0;

int main ()
{
    Square s1;
    s1.setSide(5);
    cout << "Total objects: " << s1.getCount() << endl;

    Square s2;
    s2.setSide(10);
    cout << "Total objects: " << Square::getCount() << endl;

    cout << "Side of s1: " << s1.getSide() << endl;
    cout << "Side of s2: " << s2.getSide() << endl;

    /*
        A static method can be called both by an object of the class and by the class itself.
        s1.getCount(), s2.getCount, and Square::getCount() are both valid and returns the same value.
        But s1.getSide() and s2.getSide() are not valid because getSide() is not a static method.
        Non-static methods can only be called by objects of the class.
        Cannot access non-static member 'Square::side' within static member function
    */

    return 0;
}
