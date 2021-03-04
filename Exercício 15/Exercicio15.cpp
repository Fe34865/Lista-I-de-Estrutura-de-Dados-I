#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;

int main()
{
    setlocale (LC_ALL,"Portuguese");

    int x1,x2,y1,y2,r1,r2,a,b,c;

    cout << "Informe o ponto X do primeiro círculo: " << endl;
    cin >> x1;
    cout << "Infome o ponto y do primeiro círculo: " << endl;
    cin >> y1;
    cout << "Informe o ponto X do segundo círculo: " << endl;
    cin >> x2;
    cout << "Informe o ponto Y do segundo círculo: " << endl;
    cin >> y2;
    cout << "Informe o raio do primeiro círculo: " << endl;
    cin >> r1;
    cout << "Informe o raio do segundo círculo : " << endl;
    cin >> r2;

    if ((r1 + r2) >= c)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}
void AreCirclesColliding(int x1,int x2,int y1,int y2,int r1,int r2,int a,int b,int c)
{
    a = (x2 - x1) * (x2 - x1);
    b = (y2 - y1) * (y2 - y1);
    c = sqrt(a + b);
}

