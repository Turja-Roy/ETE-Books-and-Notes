#include <bits/stdc++.h>
using namespace std;

class base {
protected:
    vector<double> marks;
    void init (vector<double> marks) {
        this->marks = marks;
    }
};

class percentage : private base {
public:
    percentage () { }

    void setMarks () {
        vector<double> marks(5);
        cout << "Enter the marks for Physics: "; cin >> marks[0];
        cout << "Enter the marks for Chemistry: "; cin >> marks[1];
        cout << "Enter the marks for Math: "; cin >> marks[2];
        cout << "Enter the marks for Biology: "; cin >> marks[3];
        cout << "Enter the marks for English: "; cin >> marks[4];

        init(marks);
    }

    double getPercentage () {
        double total = accumulate(marks.begin(), marks.end(), 0);
        return total / 5;
    }
};

int main ()
{
    percentage p;
    p.setMarks();
    cout << "Percentage: " << p.getPercentage() << endl;

    return 0;
}
