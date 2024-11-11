#include <iostream>
using namespace std;

class Square {
private:
    int side;
public:
    static int objCount;

    Square () {
        objCount++;
    }
};

int Square::objCount = 0;

int main ()
{
    Square s1;
    cout << "Total objects: " << Square::objCount << endl;

    Square s2;
    cout << "Total objects: " << Square::objCount << endl;

    return 0;
}
