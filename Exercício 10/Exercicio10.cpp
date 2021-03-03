#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main (){
    setlocale(LC_ALL,"Portuguese");

    int meuVetor[6];
    int i;
    int temp;
    int tamanho = 6;

    for ( i=0 ; i < tamanho;i++)
    {
        cout << "Digite o " << i+1 << "º valor do vetor: " << endl;
        cin >> meuVetor[i];
    }

    for (int k = 0; k < tamanho; k++){
        for(i = 0; i < tamanho; i++){
            if (meuVetor[i] > meuVetor[i+1]){
                temp = meuVetor[i+1];
                meuVetor[i+1] = meuVetor[i];
                meuVetor[i] = temp;
            }
        }
    }

    cout << "Vetor em ordem crescente: \n";
    for( i = 0; i < tamanho; i++){
        cout << meuVetor[i] << endl;
    }

    return 0;
}
