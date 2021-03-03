#include <iostream>

using namespace std;

int main()
{
    float distance;
    float hours;
    float velMedia;

    cout << ("Informe a distancia que o veiculo percorreu em KM: ") << endl;
    cin >> distance;
    cout << ("Informe o tempo que levou para percorrer em horas: ") << endl;
    cin >> hours;

    velMedia = distance / hours;

    cout << ("A velocidade media e: ") << endl;
    cout << (velMedia) << endl;

    if(velMedia <= 90){
        cout << "A velocidade ficou abaixo do limite de 90 KM/h" << endl;
    }
    else{
        cout << "A velocidade ficou acima do limite do 90 KM/h" << endl;
    }
    return 0;
}
