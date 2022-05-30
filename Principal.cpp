#include <iostream>
#include <string>

using namespace std;

int main() {
string food = "Pizza";
string* ptr = &food;

cout << "Value of food: " << food << "\n";
// food has "Pizza" as value

cout << "Memory address of food: " << &food << "\n";
// the memory address is being referenced by the "&"

cout << "Access the memory address of food and output its value: " << *ptr << "\n";
// ptr is accessing the referenced memory address of food, *ptr will show the value using this memory address

*ptr = "Hamburguer";
// Assign a new value to the *ptr

cout << "New pointer value: " << *ptr << "\n";
// Printing the new pointer value for *ptr

cout << "New food variable: " << food << "\n"; 
// food variable changed as well


return 0;
}