#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    int todos_os_numeros[100];
    vector<int> pares;
    vector<int> impares;
    //Recebe a quantidade indicada de numeros inteiros
    for (int contador = 0; contador < 10; contador++)
    {
        cout << "Digite o " << contador + 1 << "o numero inteiro:";
        cin >> todos_os_numeros[contador];
    }

    //Separa os pares dos impares e inclui nos respectivos vetores
    for (int i = 0; i < 10; i++)
    {
        int verifica = todos_os_numeros[i];
        if (verifica % 2 == 0)
        {
            pares.push_back(verifica);
        }
        else{
            impares.push_back(verifica);
        }
    }
    cout << endl;

    //Verifica o tamanho do vetor pares e imprime
    int tam = pares.size();
    cout << "Pares: ";
    for (int i = 0; i < tam; i++)
    {
        cout << pares[i] << " ";
    }
    cout << endl;
    
    //Verifica o tamanho do vetor pares e imprime
    tam = impares.size();
    cout << "Impares: ";
    for (int i = 0; i < tam; i++)
    {
        cout << impares[i] << " ";
    }
    cout << endl;
}
