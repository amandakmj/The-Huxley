#include <stdio.h>

int main() {
    int N;

    // Leitura do tamanho do array
    scanf("%d", &N);

    // Declaração do array
    int array[N];

    // Leitura dos elementos do array
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    // Encontrar o menor elemento e a posição
    int menor = array[0];
    int posicao = 0;

    for (int i = 1; i < N; i++) {
        if (array[i] < menor) {
            menor = array[i];
            posicao = i;
        }
    }

    // Exibir o menor valor e a posição
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
