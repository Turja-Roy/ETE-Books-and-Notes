#include <bits/stdc++.h>
using namespace std;

class AddMoney {
private:
    int amount=500;
public:
    AddMoney() {}
    AddMoney(int a) {
        amount += a;
    }
    void display() {
        cout << "Final Amount: " << amount << endl;
    }
};

int main ()
{
    AddMoney obj1;
    obj1.display();
    AddMoney obj2(1000);
    obj2.display();

    return 0;
}
