#include <iostream>
using namespace std;

void DadosMatriz(int &linha, int &coluna){

    cout << "Seja bem Vindo" << endl << endl;

    cout << "Me o numero de lihas para a matriz: ";
    cin >> linha;
    cout << endl;
    
    cout << "Agora me informe o numero de colunas presentes: ";
    cin >> coluna;
}

void SomatorioDasLinhas(int ** matriz, int linha, int coluna){
    int maior = 0;
    int somatorio = 0;
    int indice = 0;

    for (int i = 0; i < linha; i++){
        
        somatorio = 0;

        for (int j = 0; j < coluna; j++){
            somatorio += matriz[i][j];
        }
        if (somatorio > maior){
            maior = somatorio;
            indice = i;
        }
    }

    cout << "Somatorio da maior linha " << indice << ": " << maior;
    cout << endl;
}

void SomatorioDasColunas(int ** matriz, int linha, int coluna){

    int SomatorioColuna = 0;
    int maior = 0;
    int indice = 0;

    for (int i = 0; i < coluna; i++){
        SomatorioColuna = 0;
        for (int j = 0; j < linha; j++){
            SomatorioColuna += matriz[j][i];
            if(SomatorioColuna > maior){
                maior = SomatorioColuna;
                indice = i;
            }
        }
    }
    cout << "O Maior somatorio e da coluna " << indice << " e: " << maior;
}

void PreencheMatriz (int ** matriz, int linha , int coluna){

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            
            matriz[i][j] = rand()%101;
        }
    }
}

void ImprimeMatriz (int ** matriz, int linha, int coluna){

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            cout << matriz [i][j] << "\t";
        }
        cout << endl;
    }
}

int main (){

    int ** matriz;
    int linha = 0;
    int coluna = 0;

    DadosMatriz(linha,coluna);

    matriz = new int * [linha];

    for (int i = 0; i < linha; i++)
        matriz[i] = new int [coluna];
    
    PreencheMatriz(matriz,linha,coluna);
    ImprimeMatriz(matriz,linha,coluna);
    SomatorioDasLinhas(matriz,linha,coluna);
    SomatorioDasColunas(matriz,linha,coluna);

    return 0;
}