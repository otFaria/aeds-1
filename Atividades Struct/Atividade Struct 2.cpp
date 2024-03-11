#include <iostream>
using namespace std;

struct Retangulo{

    float altura;
    float largura;
    
    float CalculaPerimetro(){
    float resultado = 0;

    cout << "Me informe a altura do retangulo: ";
    cin >> altura;

    cout << endl;

    cout << "Agora me informe a largura do retangulo: ";
    cin >> largura;

    resultado = altura + largura * 2;

    return resultado;
}

float CalculaArea(){

    float resultado = 0;

    cout << "Me informe a altura do retangulo: ";
    cin >> altura;

    cout << endl;

    cout << "Agora me informe a largura do retangulo: ";
    cin >> largura;

    resultado = altura * largura * 2;

    return resultado;
}
};

int main (){

    Retangulo L1;
    int opcao = 0;
    float r = 0;

    cout << "Seja bem-vindo" << endl << endl;

    cout << "1. calcular perimetro de um retangulo." << endl;
    cout << "2. calcular area de um retangulo." << endl;

    cout << "Digite a opcao desejada: ";
    cin >> opcao;

    switch (opcao){

        case 1:
            cout << "O perimetro do seu retangulo e: " << L1.CalculaPerimetro();
        break;

        case 2:
            cout << "A area do seu retangulo e: " << L1.CalculaArea();
        break;

        default:
            cout << "ERROR 404";
        break;
    }
    return 0;
}