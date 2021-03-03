#include <iostream>
#include <locale.h>

using namespace std;

int min (int par1, int par2, int menorValor1, int menorValor2);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int par1,par2,result;
    cout << "Indique o primeiro parâmetro: " << endl;
    cin >> par1;
    cout << "Indique o segundo parâmetro: " << endl;
    cin >> par2;

    result = min(par1,par2);
    cout << "O menor valor entre eles é: " << endl;
    cout << result << endl;
}
int min (int par1, int par2, int menorValor1, int menorValor2)
{

    menorValor1 = par1;
    menorValor2 = par2;
    if (par2<par1){
        return menorValor1;
    }
    else if (par1<par2){
        return menorValor2;
    }
    return 0;
}
