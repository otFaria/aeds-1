    #include <iostream>
    using namespace std;

    struct Pessoa{

        string nome;
        int idade;
        float altura;
        int CPF;
    };

    int main (){
        
            Pessoa L1;

            cout << "Ola seja bem vindo usuario" << endl;

            cout << "Aqui iremos fazer a estatisca Do IBGE 2023" << endl << endl;

            cout << "Me informe seu nome: ";
            cin >> L1.nome;

            cout << endl;

            cout << "Agora nos informe sua idade: ";
            cin >> L1.idade;

            cout << endl;

            cout << "E por ultimo nos informe seu tamanho: ";
            cin >> L1.altura; 

            cout << endl;

            cout << "Ola senhor: " << L1.nome <<" com a idade: " << L1.idade << " e altura de: " << L1.altura; 

        return 0;
    }