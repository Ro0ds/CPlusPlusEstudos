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

// Herança -- Inheritance
// Acessar outras classes herdando seus metodos
// Classe pai: Vehicle
// Classe filho: Car
// A Vehicle can be a car, but there are other types of vehicles
// So the class Car can inherit from the class Vehicle all it's objects and methods

// Use ": public className" to inherit from another class


int main() {
    Car meuCarro;
    meuCarro.honk();

    cout << meuCarro.brand + " " + meuCarro.model;
    
    return 0;
}