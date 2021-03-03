#include <iostream>
#include <locale>

using namespace std;

int max (int maiorValor1,int maiorValor2, int par1, int par2);

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int par1,par2,result;
    cout << "Insira o primeiro parâmetro: " << endl;
    cin >> par1;
    cout << "Insira o segundo parâmetro: " << endl;
    cin >> par2;

    result = max (par1,par2);
    cout << "O maior valor digitado é: " << endl;
    cout << result << endl;
}
int max (int maiorValor1,int maiorValor2, int par1, int par2)
{
    maiorValor1 = par1;
    maiorValor2 = par2;

    if (par1>par2){
        return maiorValor1;
    }
    else if (par2>par1){
        return maiorValor2;
    }
    return 0;
}
