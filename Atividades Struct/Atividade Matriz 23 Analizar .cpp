#include <iostream>
using namespace std;

void PreencheDados(int& linha, int& coluna) {
    cout << "\n Seja Bem Vindo \n ";

    cout << "Me informe o numero de colunas de sua matriz: ";
    cin >> coluna;

    cout << "Agora me informe o numero de linhas de sua matriz: ";
    cin >> linha;
}

int ** CriaMatriz(int linha, int coluna) {
    
    int ** matriz = new int*[coluna];

    for (int i = 0; i < coluna; i++) {
        matriz[i] = new int[linha];
    }

    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    return matriz;
}

int ** MatrizTransposta( int** matriz, int linha, int coluna) {
    
    int** matrizT = new int*[linha];

    for (int i = 0; i < linha; i++) {
        matrizT[i] = new int[coluna];
    }

    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            matrizT[i][j] = matriz[j][i];
        }
    }
    return matrizT;
}

void ImprimeMatrizes(int** matriz, int** matrizT, int linha, int coluna) {
    cout << "\n Matriz Original: \n";
    for (int i = 0; i < coluna; i++) {
        for (int j = 0; j < linha; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatriz Transposta:\n";
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            cout << matrizT[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {

    int ** matriz;
    int ** matrizT;
    int linha = 0;
    int coluna = 0;

    PreencheDados(linha, coluna);
    matriz = CriaMatriz(linha, coluna);
    matrizT = MatrizTransposta(matriz, linha, coluna);
    ImprimeMatrizes(matriz, matrizT, linha, coluna);

    return 0;
}