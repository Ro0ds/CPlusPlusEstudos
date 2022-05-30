#include <iostream>
#include <string>

using namespace std;

int main() {

string food = "pizza";
string &meal = food;

cout << "Food: " << food << "\n";
cout << "Meal: " << meal << "\n";
cout << "Memory address of food: " << &food << "\n";
cout << "Memory address of meal: " << &meal << "\n";

//References and Memory Address
/*
*   Cada variável tem seu espaço alocado na memória
*   Caso eu crie a variável "food" ele pegará um espaço especifico na memoria
*   Se eu criar outra chamada "meal" e fizer meal = food, ele criará um espaço novo na memoria para meal, porém pegando o valor atribuido a food
*
*   Caso você referencie a variavel food na variavel meal utilizando o &, "&meal = food"
*   A variavel meal não irá alocar um novo espaço na memoria, irá utilizar o mesmo espaço que foi alocado para a variavel food, pq foi referenciada
*   Deste modo, economizando memoria e aumentando a performance
*
*/

return 0;
}