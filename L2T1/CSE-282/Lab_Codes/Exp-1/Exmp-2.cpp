#include <iostream>
using namespace std;

struct person {
    int age;
    float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;

    cout<<"Enter age: ";
    cin>>personPtr->age;

    cout<<"Enter weight: ";
    cin>>personPtr->weight;

    cout<<"Displaying:\n";
    cout<<"Age: "<< (*personPtr).age<<endl;
    cout<<"weight: "<< personPtr->weight<<endl;

    return 0;
}
