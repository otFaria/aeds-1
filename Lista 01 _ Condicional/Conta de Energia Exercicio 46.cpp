#include <iostream>
using namespace std;


void resultado (int kW){
	
	float resultado1 = 0.0;
	float juros = 0.0;
	float aux = 0.0;
	
	if (kW <= 100){
		
	resultado1 = kW * 0.50;
	aux = resultado1;
	juros = (resultado1 * 20)/100;
	resultado1 = resultado1 + juros;
	
	cout << "Valor sem juros: " << aux << endl;
	cout << "foi acrecentado 20% de juros no valor total da conta, o valor do juros e de: " << juros << endl;
	cout << "Valor com juros: " << resultado1 << endl;
	}
	
	else if (100 < kW && kW <= 200){
		
	resultado1 = kW * 0.75;
	aux = resultado1;
	juros = (resultado1 * 20)/100;
	resultado1 = resultado1 + juros;
	
	cout << "Valor sem juros: " << aux << endl;
	cout << "foi acrecentado 20% de juros no valor total da conta, o valor do juros e de: " << juros << endl;
	cout << "Valor com juros: " << resultado1 << endl;
	}
	
	else if (kW > 200 && kW <= 250){
		
	resultado1 = kW * 1.25;
	aux = resultado1;
	juros = (resultado1 * 20)/100;
	resultado1 = resultado1 + juros;
	
	cout << "Valor sem juros: " << aux << endl;
	cout << "foi acrecentado 20% de juros no valor total da conta, o valor do juros e de: " << juros << endl;
	cout << "Valor com juros: " << resultado1 << endl;
	}
	
	else {
		
	resultado1 = kW * 1.50;
	aux = resultado1;
	juros = (resultado1 * 20)/100;
	resultado1 = resultado1 + juros;
	
	cout << "Valor sem juros: " << aux << endl;
	cout << "foi acrecentado 20% de juros no valor total da conta, o valor do juros e de: " << juros << endl;
	cout << "Valor com juros: " << resultado1 << endl;
	}
	
	
}






int main () {
	
	int kW = 0;
	int repetir = 0;
	
	do{
	cout << "---------------------------------------------------------------" << endl;
    cout << "              Bem vindo a central de conta de luz              " << endl;	
	cout << "---------------------------------------------------------------" << endl << endl;
	
	cout << "=============================" << endl;
	cout << "|    tabela de precos kW    |" << endl;
	cout << "| 100  kW  =  R$ 0,50 por kW|" << endl;
	cout << "| 100+ kW  = R$ 0,75 por kW |" << endl;
	cout << "| 200+ kW  = R$ 1,25 por kW |" << endl;
	cout << "| 250+ kW  = R$ 1,50 por kW |" << endl;
	cout << "=============================" << endl << endl;
	

	cout << "Me informe o quantos kW voce gastou durante o mes: ";
	cin >> kW;
	
	 resultado (kW);

	cout << "Se quiser repetir o procedimento digite (1): ";
	cin >> repetir;
	
}while (repetir == 1);
	return 0;
}