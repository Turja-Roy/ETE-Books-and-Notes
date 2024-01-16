#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct student {
    int roll;
    string name;
    int age;
};

void store_info(student Stu, int r);

int main ()
{
    int n;
    cout << "Number of students: "; cin >> n; getchar();
    vector<student> stu(n);

    for (int i=0 ; i<n ; i++) store_info(stu[i], i+1);

    cout << "Roll: " << stu[1].roll << endl;
    cout << "Name: " << stu[1].name << endl;
    cout << "Age: " << stu[1].age << endl;

    return 0;
}

void store_info(student Stu, int r) {
    cout << "Enter the name for roll " << r << ": ";
    Stu.roll = r;
    getline(cin, Stu.name);
    cout << "Enter the age: ";
    cin >> Stu.age; getchar();
}
