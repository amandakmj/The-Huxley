#include <stdio.h>

int main() {
    int N;

    // Leitura do tamanho do vetor
    scanf("%d", &N);

    // Declaração do vetor
    int vetor[N];

    // Leitura dos elementos do vetor
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    // Imprimir na ordem inversa
    for (int i = N - 1; i >= 0; i--) {
        printf("%d", vetor[i]);

        // Adicionar espaço entre os números, exceto após o último número
        if (i > 0) {
            printf(" ");
        }
    }

    // Finalizar a linha
    printf("\n");

    return 0;
}
