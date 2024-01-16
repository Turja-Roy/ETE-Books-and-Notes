#include <bits/stdc++.h>
using namespace std;

struct Distance {
    int feet;
    int inch;
};

int main() {
    Distance d1, d2, sum;

    cout << "Enter first distance (feet inches): ";
    cin >> d1.feet >> d1.inch;

    cout << "Enter second distance (feet inches): ";
    cin >> d2.feet >> d2.inch;

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) {
        sum.feet += sum.inch / 12;
        sum.inch %= 12;
    }

    cout << "\nSum of distances = " << sum.feet << " feet " << sum.inch << " inches" << endl;

    return 0;
}
