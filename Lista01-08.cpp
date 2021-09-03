#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int vetor_1[10], vetor_2[10], numero_pesquisado, qtde_v_1, qtde_v_2;
    char continuar;
    cout << "Construindo o Vetor 1" << endl;
    cout << endl;
    for (int i = 0; i < 10 ; i++)
    {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vetor_1[i];
    }
    cout << endl;

    cout << "Construindo o Vetor 2" << endl;
    cout << endl;
    for (int i = 0; i < 10 ; i++)
    {
        cout << "Digite o " << i + 1 << "o numero: ";
        cin >> vetor_2[i];
    }

    cout << endl;
    cout << "PESQUISA NUMERO EM VETORES" << endl;
    verifica:
    cout << endl;
    cout << "Digite o numero a ser consultado: ";
    cin >> numero_pesquisado;
    cout << endl;
    qtde_v_1 = 0;
    qtde_v_2 = 0;

    for (int i = 0 ; i < 10; i++){
        if(numero_pesquisado == vetor_1[i]){
            qtde_v_1++;
        }
        else if(numero_pesquisado == vetor_2[i]){
            qtde_v_2++;
        }
    }
    if(qtde_v_1 > qtde_v_2){
        cout << "Este numero aparece em maior quantidade no vetor 1" << endl;
    }
    else if(qtde_v_1 < qtde_v_2){
        cout << "Este numero aparece em maior quantidade no vetor 2" << endl;
    }

    if(qtde_v_1 != 0 || qtde_v_2 != 0){
        cout << "Este numero aparece " << qtde_v_1 << " vezes no Vetor 1 e "<< qtde_v_2 << " vezes no Vetor 2" << endl;
    }
    else{//if(qtde_v_1!= 0 && qtde_v_2 != 0){
        cout << "Este numero nao aparece em nenhum dos Vetores"  << endl;
    }

    cout << "Gostaria de verificar outro numero? (S/N): " ;
    cin >> continuar;
    if(continuar == 'S' || continuar == 's'){
        goto verifica;
    }
    else{
        exit(0);
    }
}