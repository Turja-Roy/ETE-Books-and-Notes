#include <bits/stdc++.h>
using namespace std;

class Batsman {
private:
    string name;
    int batsman_ID;
    static int count;

public:
    Batsman (int batsman_ID) {
        this->batsman_ID = batsman_ID;
        count++;
    }
    
    static int getCount () {
        return count;
    }
    void getname () {
        cout << "Enter Batsman Name: ";
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, name);
    }
    void showname () {
        cout << "Name of the batsman: " << name << endl;
    }
    void showID () {
        cout << "ID of the batsman: " << batsman_ID << endl;
    }
};

int Batsman::count = 0;

int main ()
{
    cout << "Initially number of objects: " << Batsman::getCount() << endl;
    int n;
    cout << "Enter the number of entry: ";
    cin >> n;
    vector <Batsman> batsman;

    for (int i=0 ; i<n ; i++) {
        int id = 180400 + Batsman::getCount()+1;
        Batsman b = Batsman(id);
        b.getname();
        batsman.push_back(b);
    }

    cout << endl << "Finally number of objects: " << Batsman::getCount() << endl;
    for (auto b : batsman) {
        b.showname();
        b.showID();
        cout << endl;
    }

    return 0;
}
