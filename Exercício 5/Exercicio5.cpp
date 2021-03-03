#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Digite o valor de X: " << endl;
    cin >> (x);
    cout << "Digite o valor de Y: " << endl;
    cin >> (y);


    cout << "X :" << x << "\nY :" << y << endl;
    if (3*x+y==8){
        cout << "O algoritmo pertence a reta" << endl;
    }
    else{
        cout << "O algoritmo nao pertence a reta" << endl;
    }
    return 0;
}
