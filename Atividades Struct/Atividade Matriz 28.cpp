#include <iostream>
#include <time.h>
using namespace std;

void DadosMatriz(int &linha, int &coluna){

    cout << "Seja Bem Vindo" << endl << endl;

    cout << "Me o numero de lihas para a matriz: ";
    cin >> linha;
    cout << endl;
    
    cout << "Agora me informe o numero de colunas presentes: ";
    cin >> coluna;
}

void CriaMatriz (int ** &matriz, int linha, int coluna){

     matriz = new int * [linha];

    for (int i = 0; i < linha; i++)
        matriz[i] = new int [coluna];
}

void PreencheMatriz (int ** matriz, int linha, int coluna){

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            matriz[i][j] = rand() % 101;
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

void SomatorioTotal (int ** matriz, int linha, int coluna){

    int somatorio = 0;

    for (int i = 0; i < linha; i++){
        for (int j = 0; j < coluna; j++){
            somatorio += matriz[i][j];
        }
    }
    cout << "O somatorio de toda a matriz e: " << somatorio;
}

int main(){

    int ** matriz;
    int linha = 0;
    int coluna = 0;

    DadosMatriz(linha,coluna);
    CriaMatriz(matriz,linha,coluna);
    PreencheMatriz(matriz,linha,coluna);
    ImprimeMatriz(matriz,linha,coluna);
    SomatorioTotal(matriz,linha,coluna);

    return 0;
}