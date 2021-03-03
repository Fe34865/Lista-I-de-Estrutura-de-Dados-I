#include <iostream>

using namespace std;

int main()
{
    int sequencia = 0;
    int num0 = 0, num1 = 1;
    int n;
    cout << "N: " << endl;
    cin >> n;

    if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    for (int valor = 0;valor < n; valor++){
            sequencia = (num0 + num1);
            cout << sequencia << endl;
            num0 = num1;
            num1 = sequencia;
    }
    return 0;
}
