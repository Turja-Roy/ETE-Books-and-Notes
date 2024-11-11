#include <bits/stdc++.h>
using namespace std;

class Car {
private:
    string car_name, model_name, fuel_type;
    float mileage, price;

public:
    Car() {
        cout << "Default Constructor has been called." << endl;
    }
    Car (string car_name, string model_name, string fuel_type, float mileage, float price) {
        this->car_name = car_name;
        this->model_name = model_name;
        this->fuel_type = fuel_type;
        this->mileage = mileage;
        this->price = price;
    }
    ~Car() {
        cout << "Destructor has been called." << endl;
    }
    void displaydata () {
        cout << "Car Name: " << car_name << endl;
        cout << "Model Name: " << model_name << endl;
        cout << "Fuel Type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

int main ()
{
    Car car1;
    car1.displaydata();

    cout << endl << endl;
    Car car2("McLaren", "720S", "Petrol", 10.5, 30000000);
    car2.displaydata();

    return 0;
}
