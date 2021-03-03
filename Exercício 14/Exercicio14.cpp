#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int VowelsCount (string word)
{
    int i = 0, contador = 0;

    for( i = 0; i < 10; i++)
    {
        if((word[i]=='a')||(word[i]=='e')||(word[i]=='i')||(word[i]=='o')||(word[i]=='u')||(word[i]=='A')||(word[i]=='E')||(word[i]=='I')||(word[i]=='O')||(word[i]=='U'))
        {
            contador++;
        }
    }
    return contador;
}
int main()
{

    setlocale(LC_ALL,"Portuguese");

    string word;

    cout << "Digite uma frase: " << endl;

    cin >> word;

    cout << "O número total de vogais é : " << VowelsCount(word) << endl;

    return 0;

}
