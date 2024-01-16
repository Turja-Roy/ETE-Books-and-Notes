#include <bits/stdc++.h>
using namespace std;

struct Marks {
    int roll;
    string name;
    float chem_marks, maths_marks, phy_marks;
};

int main() {
    Marks students[5];

    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Roll number: "; cin >> students[i].roll;
        cout << "Name: ";
        cin.ignore(); getline(cin, students[i].name);
        cout << "Chemistry marks: "; cin >> students[i].chem_marks;
        cout << "Mathematics marks: "; cin >> students[i].maths_marks;
        cout << "Physics marks: "; cin >> students[i].phy_marks;
    }

    cout << endl << "Student percentages:" << endl;
    for (int i = 0; i < 5; ++i) {
        float total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (total_marks / 300.0) * 100;
        cout << "Student " << students[i].roll << " (" << students[i].name << "): " << percentage << "%" << endl;
    }

    return 0;
}
