#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Person {
    char *name;
    int citNo;
    float salary;
} person1;

int main() {
    getline(cin, person1.name);
    strcpy(person1.name, "Ronaldo");

    person1.citNo = 1985;
    person1. salary = 2500;

    cout << "Name: " << person1.name << endl;
    cout << "Citizenship No.: " << person1.citNo << endl;
    cout << "Salary: " << person1.salary << endl;

    return 0;
}
