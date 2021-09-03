#include <iostream>

using namespace std;

int lista_de_numeros[100];

int main()
{
    for (int contador = 0; contador < 5; contador++)
    {
        cout << "Digite o " << contador + 1 << "o numero inteiro:";
        cin >> lista_de_numeros[contador];
    }

    for (int i = 5 - 1; i >= 0; i--)
    {
        cout << lista_de_numeros[i] << endl;
    }
}
