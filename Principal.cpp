#include <iostream>
#include <string>

using namespace std;

class Car{
        public:
            string brand;
            string model;
            int year;
            Car(string Brand, string Model, int Year);
};

Car::Car(string Brand, string Model, int Year){
    brand = Brand;
    model = Model;
    year = Year;
}

int main() {
    Car carroUm("BMW", "M5", 2022);
    Car carroDois("Ford", "Mustang", 1999);

    cout << "Carro 1: " << "Marca: " << carroUm.brand << " | Modelo: " << carroUm.model << " | Ano: " << carroUm.year << "\n";
    cout << "Carro 2: " << "Marca: " << carroDois.brand << " | Modelo: " << carroDois.model << " | Ano: " << carroDois.year << "\n";
    
    return 0;
}