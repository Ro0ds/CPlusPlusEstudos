#include <iostream>
#include <string>

using namespace std;
int i = 0;

void minhaFuncao();

int main() {
    for (int a = 1; a <= 10; a++){
        minhaFuncao();
    }
    
    return 0;
}

void minhaFuncao(){
    i++;
    cout << "this function is being executed " << i << " times\n";
}