#include <iostream>
#include <math.h>
using namespace std;

struct AreaPerimetro{

    float raio;

    float CalculaPerimetro (){
        
        float P = 0;
        P = 2 * 3.14 * raio; 
        return P;  
    }

    float CalculaArea (){

        float Area = 0;
        Area = 3.14 * pow(raio,2);
        return Area;
    }
};

int main (){

    AreaPerimetro Perimetro;

    cout << "Me informe o raio do cirulo para fazer os calculos: ";
    cin >> Perimetro.raio;
    
    cout << "A area do circulo com raio " << Perimetro.raio << " e de: " << Perimetro.CalculaArea() << endl << endl;
    cout << "O Perimetro do circulo com raio " << Perimetro.raio << " e de: " << Perimetro.CalculaPerimetro();

    return 0;
}