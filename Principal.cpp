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

class CarColor : public Car, public Vehicle{

};

// Multiple inheritance
// Class can inherit from more than one class, using comma
// Vehicle: father
// Car: father
// CarColor: child

int main() {
    Car meuCarro;
    meuCarro.honk();

    cout << meuCarro.brand + " " + meuCarro.model;
    
    return 0;
}