#include <iostream>
#include <locale.h>
using namespace std;


void prova (){
	
	string nome = " ";
	string escola = " ";
	int dia = 0;
	int mes = 0;
	int ano = 0;
	int gabarito = 0;
	int n = 0;
	int i = 0;
	char n1 = ' ';
	char n2 = ' ';
	char n3 = ' ';
	char n4 = ' ';
	char n5 = ' ';
	char n6 = ' ';
	char n7 = ' ';
	char n8 = ' ';
	char n9 = ' ';
	char n10 = ' ';
	int contador = 0;
	int PrimeiroAluno = 0;
	float soma = 0;
	float media = 0;
	int maior = 0;
	int menor = 0;
	int aux = 0;

	
	cout << "Me informe quantos alunos ira utilizar o sistema: ";
	cin >> n;
	
	
	for(int j = 1; j <= n; j++){
	
	cout << "-------------------------------------------------" << endl;
	cout << "         Bem vindo a nossa avaliação             " << endl;
	cout << "-------------------------------------------------" << endl << endl;
	

	
	cout << "Seu nome: ";
	cin >> nome;
	
	
	do{
	cout << "Me informe o Dia: ";
	cin >> dia;} while(dia == 0 || dia > 31);
	
	do{
	cout << "Me informe o Mes: ";
	cin >> mes;} while(mes == 0 || mes > 12);
	
	do{
	cout << "Me informe o Ano: ";
	cin >> ano;} while(ano == 0);
	
	cout << "Informe o Nome do local da prova: ";
	cin >> escola;
	
	
	cout << " 1- Tendo os valores de 1 e voce efetua uma soma no valor de 1, qual o resultado: " << endl << endl;
	cout << "  A = 2    B = 429  C= 29  D = 1,5 E = 3" << endl;
	
	cout << "Sua resposta foi: " ; cin >> n1; 
	cout << " " << endl << endl;
	
	if (n1 == 'A' || n1 == 'a'){
		PrimeiroAluno++;
		}
		
	cout << " 2- Tendo os valores de 3 e voce efetua uma soma no valor de 1, qual o resultado: " << endl << endl;
	cout << "  A = 2    B = 4  C= 42313  D = 1,5 E = 3" << endl;
	cout << "Sua resposta foi: " ; cin >> n2; 
	cout << " " << endl << endl;
	
	if (n2 == 'B' || n2 == 'b'){
		PrimeiroAluno++;
		}
		
	cout << " 3- Tendo os valores de 3 e voce efetua uma multiplicacao no valor de 3, qual o resultado: " << endl << endl;
	cout << "      A = 2    B = 429  C= 9  D = 1,5 E = 3" << endl;
	cout << "Sua resposta foi: " ; cin >> n3;
	cout << " " << endl << endl; 
	
	if (n3 == 'C' || n3 == 'c'){
		PrimeiroAluno++;
		}
		
		
	cout << " 4- Tendo os valores de 3 e voce efetua uma divisao no valor de 1, qual o resultado: " << endl << endl;
	cout << "      A = 1    B = 429  C= 4  D = 3 E = 3,5" << endl;
	cout << "Sua resposta foi: " ; cin >> n4; 
	cout << " " << endl << endl; 
	
	if (n4 == 'D' || n4 == 'd'){
		PrimeiroAluno++;
		}
		
	cout << " 5- Tendo os valores de 3 e voce efetua uma soma no valor de 1, qual o resultado: " << endl << endl;
	cout << "  A = 2    B = 429  C= 1  D = 1,5 E = 4" << endl;
	 cout << "Sua resposta foi: " ; cin >> n5;
	 cout << " " << endl << endl; 
	
	if (n5 == 'E' || n5 == 'e'){
		PrimeiroAluno++;
		}
		
	cout << " 6- Tendo os valores de 1 e voce efetua uma soma no valor de 6, qual o resultado: " << endl << endl;
	cout << "  A = 2    B = 429  C= 29  D = 1,5 E = 7" << endl;
	cout << "Sua resposta foi: " ; cin >> n6; 
	cout << " " << endl << endl; 
	
	if (n6 == 'E' || n6 == 'e'){
		PrimeiroAluno++;
		}
		
	cout << " 7- Tendo os valores de 3 e voce efetua uma soma no valor de 4, qual o resultado: " << endl << endl;
	cout << "  A = 2    B = 429  C= 4  D = 7 E = 3" << endl;
	cout << "Sua resposta foi: " ; cin >> n7; 
	cout << " " << endl << endl; 
	
	if (n7 == 'D' || n7 == 'd'){
		PrimeiroAluno++;
		}
		
	cout << " 8- Tendo os valores de 3 e voce efetua uma multiplicacao no valor de 2, qual o resultado: " << endl << endl;
	cout << "      A = 2    B = 429  C = 6  D = 1,5 E = 3" << endl;
	cout << "Sua resposta foi: " ; cin >> n8; 
	cout << " " << endl << endl; 
	
	if (n8 == 'C' || n8 == 'c'){
		PrimeiroAluno++;
		}
		
		
		cout << " 9- Tendo os valores de 5 e voce efetua uma divisao no valor de 1, qual o resultado: " << endl << endl;
	cout << "      A = 1    B = 5  C = 4  D = 3 E = 3,5" << endl;
	cout << "Sua resposta foi: " ; cin >> n9; 
	cout << " " << endl << endl; 
	
	if (n9 == 'B' || n9 == 'b'){
		PrimeiroAluno++;
		}
		
	cout << " 10- Tendo os valores de 3 e voce efetua uma soma no valor de 120, qual o resultado: " << endl << endl;
	cout << "  A = 123    B = 429  C= 4  D = 1,5 E = 3";
	cout << "Sua resposta foi: " ; cin >> n10; 
	cout << " " << endl << endl; 
	
	if (n10 == 'A' || n10 == 'a'){
		PrimeiroAluno++;
		}
		
		cout << "Total De Acertos: "  << PrimeiroAluno << endl << endl;
		
		
		//Ver a maior nota.		
		if (PrimeiroAluno > maior){
			
			maior = PrimeiroAluno;
			menor = PrimeiroAluno;
		}else{
			if (PrimeiroAluno < menor){
				
				menor = PrimeiroAluno;
				
			}
			
		}
			
			
		
		soma= PrimeiroAluno + aux;
		aux = soma;
		PrimeiroAluno = 0;
	
}
	
	media = soma / n;
	
 	cout << "A Media da turma e: " << media << endl;
 	
 	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
 	
	
	
	
	cout << "Para Ver o Gabrito digite 002: ";
	cin >> gabarito;
		
	while( gabarito == 002, i < 1){
			
			cout << "-----------------------------" << endl;
			cout <<	     " Gabarito da prova" << endl;
		     cout << "-----------------------------" << endl;
	
	cout << "01 - A" << endl;
	cout <<	"02 - B" << endl;
	cout << "03 - C" << endl;
	cout <<	"04 - D" << endl;
	cout <<	"05 - E" << endl;
	cout <<	"06 - E" << endl;
	cout <<	"07 - D" << endl;
	cout <<	"08 - C" << endl;
	cout <<	"09 - B" << endl;
	cout <<	"10 - A" << endl;
	
	i++;
	}
	
}


	
	
	
	



int main (){

	prova();
	
	
	
	return 0;
}