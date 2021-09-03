#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int depto[5], departamento;
    string cod[5], descr[5];
    double preco[5];

    cout << "Cadastramento de Produtos" << endl;
    cout << endl;
    for (int i = 0; i < 5 ; i++)
    {
        cout << "Dados do " << i + 1 << "o produto:" << endl;
        cout << "Departamento: ";
        cin >> depto[i];
        cout << "Codigo: ";
        cin >> cod[i];
        cout << "Descricao: ";
        cin >> descr[i];
        cout << "Preco: ";
        cin >> preco[i];
        cout << endl;
    }
    cout << endl;
    cout << "CONSULTA DE PRODUTOS POR DEPARTAMENTO" << endl;
    verifica:
    cout << endl;
    cout << "Digite o numero do Departamento a ser consultado: ";
    cin >> departamento;
    cout << endl;

    if( departamento >= 1 && departamento <= 20){
        bool cadastrado = false;
        for (int i = 0 ; i < 5; i++){
            if( departamento == depto[i]){
                cadastrado = true;
            }
        }
        if(cadastrado == true){
            cout << "Produtos do Departamento: " << endl;
            for (int i = 0 ; i < 5; i++){
                if(depto[i] == departamento){
                    cout << "Cod: " << cod[i] << " - Descricao: " << descr[i] << " - Preco: " << fixed << setprecision(2) << preco[i] << endl;
                }
            }
        }
        else{
            cout << " * * * Departamento nao cadastrado * * *" << endl;
            goto verifica;
        }
    }
    else{
        exit(0);
    }
    goto verifica;
}