#include <iostream>
using namespace std;

void PreencheMatriz (int ** matriz, int linha, int coluna){
    
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << "Ola, informe o numero da matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void RetiraTerraTerreno (int ** matriz, int linha, int coluna){
    
    int retirado = 0;

    for (int i = 2; i < linha; i++) {
        for (int j = 3; j < coluna; j++) {
            for (int x = 0; x < 9999; x++) {
                if (matriz[i][j] > 10) {
                    matriz[i][j] = matriz[i][j] - 1;
                    retirado = retirado + 1;
                }
            }
        }
    }

    for (int i = 2; i < linha; i++) {
        for (int j = 3; j < coluna; j++) {
            if (matriz[i][j] < 10) {
                for (int k = 0; k <= 9999; k++) {
                    if (matriz[i][j] < 10) {
                        matriz[i][j] = matriz[i][j] + 1;
                        retirado = retirado - 1;
                    }
                }
            }
        }
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "A quantidade retirada e " << retirado << " m2";
}

int main() {

    int **matriz;
    int linha = 6;
    int coluna = 6;

    matriz = new int*[linha];

    for (int i = 0; i < linha; i++)
        matriz[i] = new int[coluna];

    PreencheMatriz(matriz,linha,coluna);
    RetiraTerraTerreno(matriz,linha,coluna);

    return 0;
}