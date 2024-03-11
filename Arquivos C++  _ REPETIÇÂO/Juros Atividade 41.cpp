#include <iostream>
using namespace std;

float Parcela3(float Divida,int parcela){
	
	float resultado = 0.0;
	float ValorJuros = 0.0;

	
	if (parcela == 1){
		
		cout << "O Valor de sua divida sera: " << Divida << " a quantidade sera de parcelas: " << parcela << " o valor do juros." << ValorJuros;
		
		}else if (parcela == 3){
			
			ValorJuros = (Divida*10)/100;
			
			resultado = (Divida+ValorJuros);
			
			cout << "O Valor de sua divida sera: " << Divida << " a quantidade sera de parcelas: " << parcela << " o valor do juros." << ValorJuros;
		
		}else if (parcela == 6){
			
			ValorJuros = (Divida*15)/100;
			
			resultado = (Divida+ValorJuros);
			
			cout << "O Valor de sua divida sera: " << Divida << " a quantidade sera de parcelas: " << parcela << " o valor do juros." << ValorJuros;
			
		}else if (parcela == 9){
			
			ValorJuros = (Divida*20)/100;
			
			resultado = (Divida+ValorJuros);
			
			cout << "O Valor de sua divida sera: " << Divida << " a quantidade sera de parcelas: " << parcela <<" o valor do juros." << ValorJuros;
		
	}else if (parcela == 12){
			
			ValorJuros = (Divida*25)/100;
			
			resultado = (Divida+ValorJuros);
			
			cout << "O Valor de sua divida sera: " << Divida << " a quantidade sera de parcelas: " << parcela << " o valor do juros." << ValorJuros;
	
}

return resultado;
}
	

int main (){
	
	float Divida = 0;
	int parcela = 0;
	int opcao = 0;
	
	cout << "--------------------------------------------------" << endl;
	cout << " Bem vindo ao central de dividas de nossa empresa" << endl;
	cout << "--------------------------------------------------" << endl << endl << endl;
	

	cout << "Digite o valor de sua divida: ";
	cin >> Divida;
	
	
do{

	cout << endl <<"----------------------------------------------" << endl;
	cout << endl <<"Agora escolha quantas parcelas voce vai pagar." << endl;
	cout << endl <<"----------------------------------------------" << endl << endl;
	
	cout << "PARCELAS" << "                " << "JUROS" << endl;
	cout << "   1   "<< "                  " <<  "0%  " << endl;
	cout << "   3   "<< "                  " <<  "10%  " << endl;
	cout << "   6   "<< "                  " <<  "15%  " << endl;
	cout << "   9   "<< "                  " <<  "20%  " << endl;
	cout << "   12  "<< "                  " << "25%  " << endl << endl;
	
	cout << "Digite Quantas parcelas voce quer dividir: " << endl;
	cin >> parcela;
	
}while (parcela > 12 || parcela == 11 || parcela == 10|| parcela == 8|| parcela == 7|| parcela == 5 || parcela == 4|| parcela == 2 || parcela == 0);
	
	
	switch (parcela){
		
		case 1: 
		
		Parcela3(Divida,parcela);
		
		break;
		
				
		case 3: 
		
		Parcela3(Divida,parcela);
		
		break;
		
		case 6: 
		
		Parcela3(Divida,parcela);
		
		break;
		
		case 9: 
		
		Parcela3(Divida,parcela);
		
		break;
		
		case 12: 
		
		Parcela3(Divida,parcela);
		
		break;
		
	default :
		
		cout << "Error 404";


	}
	
	
return 0;
	}
	
	
	
