#include <iostream>

using namespace std;

int main()
{
    int valor1;
    int valor2;
    cout << "Digite o primeiro valor: " << endl;
    cin >> valor1;
    cout << "Digite o segundo valor: " << endl;
    cin >> valor2;

    int troca = 0;

    cout << "Valor 1: " << valor1 << endl;
    cout << "Valor 2: " << valor2 << endl;

    troca = valor1;
    valor1 = valor2;
    valor2 =troca;

    cout << "Valor 1: " << valor1 << endl;
    cout << "Valor 2: " << valor2 << endl;
    return 0;
}
