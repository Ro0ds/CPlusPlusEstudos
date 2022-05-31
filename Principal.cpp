#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
        string brand;
        string model;
        int year;

    public:
        void setCar(string _brand, string _model, int _year){
            brand = _brand;
            model = _model;
            year = _year;
        }

        string getModel(){
            return model;
        }

        string getBrand(){
            return brand;
        }

        int getYear(){
            return year;
        }
};

int main() {
    Car carroUm, carroDois;

    carroUm.setCar("BMW", "M5", 2022);
    carroDois.setCar("Ford", "Mustang", 1999);

    cout << "Carro 1: " << "Marca: " << carroUm.getBrand() << " | Modelo: " << carroUm.getModel() << " | Ano: " << carroUm.getYear() << "\n";
    cout << "Carro 2: " << "Marca: " << carroDois.getBrand() << " | Modelo: " << carroDois.getModel() << " | Ano: " << carroDois.getYear() << "\n";
    
    return 0;
}