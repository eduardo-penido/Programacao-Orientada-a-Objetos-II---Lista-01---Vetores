#include <iostream>

using namespace std;

int main()
{
    int lista_de_numeros[50], contador = 0, verificacao = 0, existe = 0;
    for (contador = 0; contador < 5; contador++)
    {
        cout << "Digite o " << contador + 1 << "o numero inteiro:";
        cin >> lista_de_numeros[contador];
    }
    cout << "Informe um numero a ser verificado: ";
    cin >> verificacao;

    for(contador = 0; contador < 5; contador++){
        if(lista_de_numeros[contador]==verificacao){
            existe++;
        }
    }
    if(existe != 0){
        cout << "O numero informado ja esta na lista!";
    }
    else{
        cout << "O numero informado nao esta na lista!";
    }
}