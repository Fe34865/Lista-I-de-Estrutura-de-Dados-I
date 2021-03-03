#include <iostream>

using namespace std;

int main()
{
    int number;
    int fatorial = 1;
    cout << "Digite um numero inteiro: " << endl;
    cin >> number;

    for (fatorial = 1 ;number > 1 ; number = number - 1)
        fatorial = fatorial * number;
        cout << "Fatorial: " << fatorial << endl;

    return 0;
}
