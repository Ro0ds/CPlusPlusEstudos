#include <iostream>
#include <string>

using namespace std;

int main() {
string food = "Pizza";
string* ptr = &food;

cout << "Food: " << food << "\n";
cout << "Memory address of food: " <<  &food << "\n";
cout << "Memory address with pointer: " << ptr << "\n";

// Variavel "food" armazena "Pizza"
// "&food" referencia o endereço na memoria da variavel "food"
// "ptr" armazena o endereço na memoria da variavel food

return 0;
}