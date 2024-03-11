#include <iostream>
using namespace std;

struct Data{

    int dia;
    int mes;
    int ano;

    void Introducao(){
    cout << "Ola usuario seja bem vindo." << endl;

    cout << "Me informe uma data para eu verificar se e valida" << endl << endl;
    cout << "Me informe o dia: ";
    cin >> dia;
    cout << endl;

    cout << "Me informe o mes: ";
    cin >> mes;
    cout << endl;

    cout << "Me informe o ano: ";
    cin >> ano;
    cout << endl;
    }

    void VerificacaoDeData(){

        if (mes <= 12 && mes >= 0 && dia <= 31 && dia >= 0 && ano >= 0 && ano <= 9999){

            if ( (mes == 2 && dia <= 28) || (mes == 02 && dia <= 28) ){
                cout << "Sua data:  " << dia << "/" << "02" << "/" << ano << endl;
                cout << "E valida.";
            }

            else if ( (mes == 2 && dia > 28) || (mes == 02 && dia > 28) ){

                cout << "Sua data: " << dia << "/" << "02" << "/" << ano << endl;
                cout << "Sua data e invalida";
            }
                else if (mes != 2){

                    if (mes < 10){
                        cout << "Sua data: " << dia << "/" << "0" << mes << "/" << ano << endl;
                        cout << "E valida.";
                    }
                    else{
                        cout << "Sua data: " << dia << "/" << mes << "/" << ano << endl;
                        cout << "E valida.";
                    }
                }
        }
        else
            cout << "Sua data e invalida";
    }
};

int main()
{

    Data VerificaData;

    VerificaData.Introducao();
    VerificaData.VerificacaoDeData();

    return 0;
}