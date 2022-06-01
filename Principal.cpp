#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    try{
        int age = 15;
        if (age >= 18){
            cout << "Access granted - old enough.";
        }
        else{
            throw(age);
        }
    }
    catch (int myNum){
        cout << "Access denied - Age is: " << myNum;
    }

    return 0;
}