#include <iostream>
#include <string>

using namespace std;

int main() {
    struct Principal{
    int numero = 0;
    string nome;
    string sobrenome;
    string nomeCompleto;
} dados;

cout << "Nome: " << dados.nome;
getline (cin, dados.nome);

cout << "Sobrenome: " << dados.sobrenome;
getline (cin, dados.sobrenome);

dados.nomeCompleto = dados.nome  + " " + dados.sobrenome;

cout << "\nNumero: " << ++dados.numero << "\n";
cout << "Nome: " << dados.nome << "\n";
cout << "Sobrenome: " << dados.sobrenome << "\n";
cout << "Nome completo: " << dados.nomeCompleto << "\n";

return 0;
}