#include <stdio.h>

// Função para ler a matriz
void lerMatriz(int N, int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Função para realizar o produto da matriz por um escalar
void produtoPorEscalar(int N, int matriz[N][N], int escalar) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] *= escalar;
        }
    }
}

// Função para imprimir a matriz
void imprimirMatriz(int N, int matriz[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d", matriz[i][j]);
            if (j < N - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    // Leitura da ordem da matriz
    int N;
    scanf("%d", &N);

    // Leitura da matriz
    int matriz[N][N];
    lerMatriz(N, matriz);

    // Leitura da sequência de números para multiplicação
    int escalar;
    while (1) {
        if (scanf("%d", &escalar) == 1) {
            // Realiza o produto da matriz pelo escalar
            produtoPorEscalar(N, matriz, escalar);
        } else {
            break;
        }
    }

    // Imprime a matriz resultante
    imprimirMatriz(N, matriz);

    return 0;
}
