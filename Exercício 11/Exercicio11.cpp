#include <iostream>
#include <locale>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");

    float num1;
    int num2, i = 0;

    cout << "Digite o " << i + 1 << "� valor : " << endl;
    cin >> num1;
    cout << "Digite o " << i + 2 << "� valor : " << endl;
    cin >> num2;

    int result = 0;

    for (i = 0 ; i < num2 ; i++)
        result+=num1;
        num2--;
    cout << "Resultado multiplica��o atrav�s da soma: " << endl;
    cout << result << endl;
}



