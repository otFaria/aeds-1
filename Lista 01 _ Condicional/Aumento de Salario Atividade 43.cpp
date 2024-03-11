#include <iostream>
using namespace std;

float salario (float salario,int cargo,float aux){
	
	float resultado = 0.0;
	
	//Calculo Gerente 
	
	if (cargo == 101){
		
		resultado = (salario * 10)/100;
		resultado = salario + resultado;
		cout << "O salario antigo e de: R$ " << aux << endl;
		cout << "O salario novo e de : R$ " << resultado << endl;
	} 
	
	//Calculo Engenheiro
	
	else if (cargo == 102){
		
		resultado = (salario * 20)/100;
		resultado = salario + resultado;
		cout << "O salario antigo e de: R$ " << aux << endl;
		cout << "O salario novo e de : R$ " << resultado << endl;
	} 
	
	//Calculo Tecnico
	
	else if (cargo == 103){
		
		resultado = (salario * 30)/100;
		resultado = salario + resultado;
		cout << "O salario antigo e de: R$ " << aux << endl;
		cout << "O salario novo e de : R$ " << resultado << endl;
	} 
	
	//Calculo Funcionario sem cargo
	
	else {
		
		resultado = (salario * 40)/100;
		resultado = salario + resultado;
		cout << "O salario antigo e de: R$ " << aux << endl;
		cout << "O salario novo e de : R$ " << resultado << endl;
	} 
	return resultado;

}






int main () {
	
	float salario1 = 0.0;
	int cargo = 0;
	float aux = 0.0;
	int repetir = 0;
	
do{
	cout << "-------------------------------------------------------------" << endl;
	cout << "  Bem Vindo aqui sera feito o calculo de aumento de salario " << endl;
	cout << "-------------------------------------------------------------" << endl << endl;
	
	
	cout << "Me informe o codigo do cargo do funcionario" << endl << endl;
	cout << "===================================================" << endl;
	cout << "|            Tabela de codigo de cargo            |" << endl;	
	cout << "===================================================" << endl;
	
	cout << "==============================================" << endl;
	cout << "| Codigos       Cargo       Percental Almento| "<< endl;
	cout << "|   101        Gerente             10%       | "<< endl;
	cout << "|   102        Engenheiro          20%       | "<< endl;
	cout << "|   103        Tecnico             30%       | "<< endl;
	cout << "|   104        Outro Cargo         40%       | "<< endl;
	cout << "==============================================" << endl;
	
	do {
    cout << "Informe o codigo do cargo: ";
    cin >> cargo;
	} while (cargo != 101 && cargo != 102 && cargo != 103 && cargo != 104);


	// Codigo VERIFICAR O CARGO E INFORMAR O SALARIO <------ LEIA
	// AUX SERVE PARA GUARDAR O PRIMEIRO VALOR DO SALARIO E EXIBIR NO FINAL EX: LINHA 44  <----- LEIA
	
	if (cargo == 101){
		
	cout << "Me informe qual o valor do salario do Gerente: ";
	cin >> salario1;
	aux = salario1;
	}
	else if (cargo == 102){
	
		cout << "Me informe qual o valor do salario do Engenheiro: ";
		cin >> salario1;
		aux = salario1;
	}
	
	else if (cargo == 103){
	
		cout << "Me informe qual o valor do salario do Tecnico: ";
		cin >> salario1;
		aux = salario1;
	}
	
	else{
	
		cout << "Me informe qual o valor do salario do funcionario: ";
		cin >> salario1;
		aux = salario1;
	}


//SWITCH CASE SERVE PARA CRIAR UM MENU DE ESCOLHA;

	switch(cargo){
		
	// Codigo GERENTE
		
	case 101: 
	
	salario(salario1,cargo,aux);	
	
	break;		
	
	// Codigo ENGENHEIRO
	
	case 102:
			
	salario(salario1,cargo,aux);
	
	break;
	
	// Codigo Tecnico
	
	case 103 :
	salario(salario1,cargo,aux);
	
	break;
	
	// Codigo FUNCIONARIO SEM CARGO
	case 104 :
	
	salario(salario1,cargo,aux);
	
	break;


	}
	
	// Repetir o Programa
	
	cout << "Se quiser repetir digite 0: " << endl;	
	cin >> repetir;
		 
	}while (repetir == 0);
	
	
	return 0;
	
}
 