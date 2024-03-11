#include <iostream>
using namespace std;

struct Pessoa{
    string name;
    string surname;
    int age;
    char * id = new char [14];    
};

struct ContaBNC{
    Pessoa people;
    string numberCT; //numero conta
    float balance;

    void CompletedInformation (ContaBNC &bank){

        cout << "Bem vindo ao cria conta no banco." << endl << endl;

        cout << "Comecaremos pelos dados basicos." << endl;

        cout << "Me informe seu nome: ";
        cin >> bank.people.name;

        cout << "Me informe seu sobrenome: ";
        cin >> bank.people.surname;

        cout << "Me informe sua idade: ";
        cin >> bank.people.age;

        cout << "Me informe seu cpf, XXX.XXX.XXX-XX: ";
        for (int i = 0; i < 14; i++)
            cin >> bank.people.id[i];
        cout << endl;
        
        cout << "Me informe seu numero da conta: " ;
        cin >> bank.numberCT;
        cout << endl;
    } 

    void deposit (ContaBNC &bank){

        float deposit;
        bank.balance = 0;
        do{
            cout  << "Ola " << bank.people.name << "  " << bank.people.surname <<" neste local voce poderar efetuar depositos." << endl << endl;

            cout << "O valor na sua conta e de: " << bank.balance << endl;

            cout << "Me informe o valor que sera depositado: ";
            cin >> deposit;
            cout << endl;

            if (deposit >= 0)
                bank.balance = bank.balance + deposit;
            else 
                cout << "O valor a ser depositado tem que ser um saldo positivo";
        }while(deposit < 0);
    }

    void whithdraw (ContaBNC &bank){

        bank.balance = 1000;
        float money = 0;
        int repete = 2;

        cout << "Ola " << bank.people.name << "  " << bank.people.surname << " aqui voce podera efetuar saques." << endl << endl;

       do{
            cout << "O valor na sua conta e de: " << bank.balance << endl;

            cout << "Me informe o valor que sera sacado: ";
            cin >> money;
            cout << endl;

            if (bank.balance - money > 0){
                bank.balance = bank.balance - money;
                cout << "Saque efetuado com sucesso, seu saldo agora e de : " << bank.balance << endl << endl;
                cout << "Para efetuar outro saque digite 0: ";
                cin >> repete;
            }
            else{
            cout << "nao é possivel efetuar o saque seu saldo e de: " << bank.balance << endl;
            cout << "Para repetir a operacao digite 0: ";
            cin >> repete;
            }
       }while(repete == 0);
    }
};

int main (){

    ContaBNC bank;

    bank.CompletedInformation(bank);
    bank.deposit (bank);
    bank.whithdraw (bank);
    
    return 0;
}