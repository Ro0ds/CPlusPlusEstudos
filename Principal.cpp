#include <iostream>
#include <string>

using namespace std;

int main() {
string food = "Pizza";
string* ptr = &food;

cout << "Memory address with the pointer: " << ptr << "\n";
cout << "The value with the pointer: " << *ptr << "\n";

// "&food" referencia o endereço na memoria da variavel "food"
// "*ptr" retorna o valor bruto usando o endereço da memoria referenciada

return 0;
}