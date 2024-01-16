#include <bits/stdc++.h>
using namespace std;

struct Student {
    int roll;
    string name;
    int age;
    float marks;
};

int main() {
    Student student;

    cout << "Enter student details:" << endl;
    cout << "Roll No.: "; cin >> student.roll;
    cout << "Name: "; cin.ignore();
    getline(cin, student.name);
    cout << "Age: "; cin >> student.age;
    cout << "Marks: "; cin >> student.marks;

    cout << "\nStudent Details:" << endl;
    cout << "Roll No.: " << student.roll << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Marks: " << student.marks << endl;

    return 0;
}
