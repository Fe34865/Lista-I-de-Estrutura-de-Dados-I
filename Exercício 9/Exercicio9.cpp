#include <iostream>
#include <locale.h>
#include <list>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int number [10];
    int i;
    for (i=0;i<10;++i){
        cout << "Digite o " << i + 1 << "� n�mero inteiro: " << endl;
        cin >> number[i];
    }
    /*cout << "A ordem dos valores inseridos �: " << endl;
    for (i=0;i<10;++i){
        cout << number[i] << endl;
    }*/
    cout << "A ordem inversa dos valores inseridos �: " << endl;
    for (i=0;i<10;++i){
        cout << number[9-i] << endl;
    }
}
