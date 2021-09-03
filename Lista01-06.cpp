#include <iostream>

using namespace std;

int main()
{

    string nome[50];
    float n_port[50], n_mat[50];
    for (int i = 0; i < 5 ; i++)
    {
        cout << "Digite o nome do " << i + 1 << "o aluno: ";
        cin >> nome[i];
        cout << "Digite a nota de Portugues do " << i + 1 << "o aluno: ";
        cin >> n_port[i];
        cout << "Digite a nota de Matematica do " << i + 1 << "o aluno: ";
        cin >> n_mat[i];
        cout << endl;
        
    }
    cout << endl;
    cout << " Alunos que tiraram nota maior ou igual a 7.0 em Portugues e em Matematica:" << endl;
    for (int i = 0; i < 5 ; i++)
    {
        if(n_port[i] >= 7 && n_mat[i] >= 7){
            cout << nome[i] << endl;
        }
    }
    cout << endl;
    cout << " Alunos que tiraram nota maior ou igual a 7.0 apenas em Portugues:" << endl;
    for (int i = 0; i < 5 ; i++)
    {
        if(n_port[i] >= 7 && n_mat[i] < 7){
            cout << nome[i] << endl;
        }
    }
    cout << endl;
    cout << " Alunos que tiraram nota maior ou igual a 7.0 apenas em Matematica:" << endl;
    for (int i = 0; i < 5 ; i++)
    {
        if(n_port[i] < 7 && n_mat[i] >= 7){
            cout << nome[i] << endl;
        }
    }
    cout << endl;
    cout << " Alunos que tiraram nota inferior a 7.0 em ambas as materias:" << endl;
    for (int i = 0; i < 5 ; i++)
    {
        if(n_port[i] < 7 && n_mat[i] < 7){
            cout << nome[i] << endl;
        }
    } 
}