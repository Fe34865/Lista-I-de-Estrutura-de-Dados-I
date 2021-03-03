#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Digite um numero: " << endl;
    cin >> number;

    if (number % 2 == 0){
        cout << "O numero e par!" << endl;
    }
    else{
        cout << "O numero e impar!" << endl;
    }
    return 0;
}
