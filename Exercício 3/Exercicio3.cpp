#include <iostream>

using namespace std;

int main()
{
    char letra;
    cout << "Digite uma letra: " << endl;
    cin >> letra;

    if((letra == 'a')||(letra == 'e')||(letra == 'i')||(letra == 'o')||(letra == 'u')){
        cout << "A letra digitada e uma vogal!" << endl;
    }
    else{
        cout << "A letra digitada e uma consoante!" << endl;
    }
    return 0;
}
