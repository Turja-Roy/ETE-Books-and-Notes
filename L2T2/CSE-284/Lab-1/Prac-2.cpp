#include <bits/stdc++.h>
using namespace std;

class batsman {
private:
    short code;
    string name;
    int tot_innings, not_outs, tot_runs;
    double batavg;

    void calcavg () {
        batavg = (double) tot_runs / (tot_innings - not_outs);
    }

public:
    void readdata () {
        cout << "Enter the batsman code: "; cin >> code;
        cout << "Enter the batsman name: "; getline(cin >> ws, name);
        cout << "Enter the total innings: "; cin >> tot_innings;
        cout << "Enter the total not outs: "; cin >> not_outs;
        cout << "Enter the total runs: "; cin >> tot_runs;
        calcavg();
    }

    void displaydata () {
        cout << "Batsman code: " << code << endl;
        cout << "Batsman name: " << name << endl;
        cout << "Total innings: " << tot_innings << endl;
        cout << "Total not outs: " << not_outs << endl;
        cout << "Total runs: " << tot_runs << endl;
        cout << "Batting average: " << batavg << endl;
    }
};

int main ()
{
    batsman b;

    b.readdata();
    cout << endl;
    b.displaydata();

    return 0;
}
