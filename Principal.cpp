#include <iostream>
#include <string>

using namespace std;

class Vehicle{
    public:
        string brand = "Ford";
        void honk(){
            cout << "bibi\n";
        }
};

class Car : public Vehicle {
    public:
        string model = "Mustang";
};

class CarColor : public Car{

};

// Multilevel inheritance
// Class can inherit from another class who is derived from another class
// Vehicle: father
// Car: Child
// CarColor: Grand Child

int main() {
    Car meuCarro;
    meuCarro.honk();

    cout << meuCarro.brand + " " + meuCarro.model;
    
    return 0;
}