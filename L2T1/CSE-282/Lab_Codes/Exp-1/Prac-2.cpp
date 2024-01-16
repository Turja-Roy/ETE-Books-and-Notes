#include <bits/stdc++.h>
using namespace std;

struct Student {
    int rollNo;
    string name;
    int age;
};

int main() {
    Student students[5];

    for (int i = 0; i < 5; ++i) {
        students[i].rollNo = i + 1;

        cout << "Enter details of student " << students[i].rollNo << ":" << endl;
        cout << "Name: ";
        cin.ignore(); getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
    }

    cout << "\nDetails of student with roll no. 2:" << endl;
    cout << "Name: " << students[1].name << endl;
    cout << "Age: " << students[1].age << endl;

    return 0;
}
