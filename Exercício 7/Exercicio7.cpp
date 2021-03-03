#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int number, maximo, minimo;
    int i;
    cout << "Digite o 1º valor: " << endl;
    cin >> number;

    maximo = number;
    minimo = number;

    for (i = 1; i<10;++i){
        cout << "Digite o " << i+1 << "º valor: " << endl;
        cin >> number;

        if (number>maximo)
            maximo = number;

        else if (number<minimo)
            minimo = number;
    }
    cout << "O menor numero encontrado e: " << minimo;
    cout << "\nO maior numero encontrado e: " << maximo;
    return 0;
}
