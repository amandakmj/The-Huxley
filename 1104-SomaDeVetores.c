#include <stdio.h>

int main() {
    // Declaração de vetores
    int vetor1[10], vetor2[10], vetorSoma[10];

    // Preenchendo o primeiro vetor
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Preenchendo o segundo vetor
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Calculando a soma e armazenando no terceiro vetor
    for (int i = 0; i < 10; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }

    // Imprimindo o vetor resultado
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorSoma[i]);
    }

    return 0;
}
