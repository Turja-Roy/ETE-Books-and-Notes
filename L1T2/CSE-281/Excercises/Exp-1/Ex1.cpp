#include <iostream>
#include <string>
using namespace std;

struct student {
    int roll;
    string name;
    int age;
    int marks;
};

void display(struct student st);

int main ()
{
    struct student st1;

    cout << "Enter name: " << endl;
    getline(cin, st1.name);
    cout << "Enter roll, age, and marks: " << endl;
    cin >> st1.roll >> st1.age >> st1.marks;

    display(st1);

    return 0;
}

void display(struct student st) {
    cout << endl << "Displaying student information:" << endl;
    cout << "Name: " << st.name << endl;
    cout << "Roll: " << st.roll << endl;
    cout << "Age: " << st.age << endl;
    cout << "Marks: " << st.marks << endl;
}
