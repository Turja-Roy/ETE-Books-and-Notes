#include <bits/stdc++.h>
using namespace std;

class Wall {
private:
    double length;

public:
    Wall () {
        length = 5.5;
        cout << "Creating a wall." << endl;
        cout << "Length: " << length << endl;
    }
};

int main ()
{
    Wall wall1;
    return 0;
}
