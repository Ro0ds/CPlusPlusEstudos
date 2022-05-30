#include <iostream>
#include <string>

using namespace std;

int main() {

struct TipoDeVar {
    int numero;
    string nome;
};

TipoDeVar teste;

teste.nome = "Rodrigo";
teste.numero = 1;

cout << "Nome: " << teste.nome << "\n";
cout << "Numero: " << teste.numero << "\n";

return 0;
}