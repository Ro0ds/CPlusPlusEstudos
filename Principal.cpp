#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string textoSaida;

    // Cria a abre o arquivo
    // ofstream meuArquivo("texto.txt");

    // Escreve no arquivo
    // meuArquivo << "Files writing with <<";

    // Lê arquivo
    ifstream meuArquivo("texto.txt");

    while (getline (meuArquivo, textoSaida)){
        cout << textoSaida;
    }

    // Fecha o arquivo (boas práticas)
    meuArquivo.close();

    return 0;
}