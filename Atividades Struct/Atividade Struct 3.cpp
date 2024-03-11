#include <iostream>
using namespace std;

struct Aluno{

    int notas;
    int matricula;
    string nome;
    float * escola = new float [notas];
    
    void preencheDados(){

    cout << "Comecaremos preenchedo os seus dados." << endl << endl;

    cout << "Me informe seu nome: ";
    cin >> nome;

    cout << endl;

    cout << "Agora Me informe seu numero de matricula *Apenas Numeros*: ";
    cin >> matricula;

    cout << endl;

    cout << "Agora nos informe quantas notas voce vai querer calcular a media: ";
    cin >> notas;
}

void PrencVetNotas(){

    cout << "Agora voce tera que me informar as suas notas." << endl << endl;

    for(int i = 0; i < notas; i ++){

        cout << "Nota " << i + 1 << ": ";
        cin >> escola [i];
    }
}

void MediaNts (){

    float soma;

    cout << "Agora iremos fazer a media entre suas notas" << endl;
    
    for(int i = 0; i < notas; i++){

        soma = soma + escola [i];
    }
    soma = (float) soma / notas;
    
    cout << "A media entre as suas notas e: " << soma;
}
};

int main (){

    Aluno Estudante;
    cout << "Seja bem vindo aluno, e bom te ver por aqui :)" << endl << endl;

    Estudante.preencheDados();
    Estudante.PrencVetNotas();
    Estudante.MediaNts();

    return 0;
}