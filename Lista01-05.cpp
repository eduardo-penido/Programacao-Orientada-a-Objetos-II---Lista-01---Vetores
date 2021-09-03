#include <iostream>

using namespace std;

int main()
{

    string nome[50];
    float n1[50], n2[50], media_individual[50], media_turma = 0, teste = 5;
    for (int i = 0; i < teste ; i++)
    {
        cout << "\nDigite o nome do " << i + 1 << "o aluno: ";
        cin >> nome[i];
        cout << "Digite a 1a nota do " << i + 1 << "o aluno: ";
        cin >> n1[i];
        cout << "Digite a 2a nota do " << i + 1 << "o aluno: ";
        cin >> n2[i];
        cout << endl;
        media_individual[i] = (n1[i] + n2[i]) / 2;
        cout << "Aluno: " << nome[i] << " -- Media: " << media_individual[i] << endl;
        media_turma += media_individual[i];
    }
    cout << endl;
    // for (int i = 0; i < 5 ; i++)
    // {
    //     cout << "Aluno: " << nome[i] << endl;
        
    //     cout << endl;
        
    // }
    media_turma = media_turma / teste;
    cout << "A media da turma foi: " << media_turma << endl;
    cout << endl;

    cout << "Acima da media: " << endl;
    cout << endl;

    for (int i = 0; i < teste ; i++)
    {
        if( media_individual[i] >= media_turma ){
            cout << "Aluno: " << nome[i] << " -- Media:  " << media_individual[i] << endl;
            cout << endl;
        }
    }
}