#include <iostream>
using namespace std;

struct Pronto3D{
    float Altura;
    float Base;
    float Resultado;

    void Introducao (){

        cout << "Seja bem vindo." << endl << endl;
        cout << "Ola me informe a base do triangulo: ";
        cin >> Base;
        cout << endl;
        cout << "Agora me informe a altura do triangulo: ";
        cin >> Altura;
        cout << endl;

        Resultado = (Base * Altura) / 2.0;
        cout << "A area do triangulo e: " << Resultado;
    }
};

int main (){

    Pronto3D Triangulo;

    Triangulo.Introducao();
    
    return 0;
}