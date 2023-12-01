#include <stdio.h>

// Função para avaliar os triglicerídeos e imprimir o resultado
void avaliarTriglicerideos(int valor) {
    printf("Triglicerideos %d mg/dl: ", valor);

    if (valor >= 0 && valor < 150) {
        printf("DESEJAVEL\n");
    } else if (valor >= 150 && valor <= 200) {
        printf("LIMITROFE\n");
    } else if (valor > 200) {
        printf("ALTO\n");
    } else {
        printf("Algum valor fora da faixa\n");
    }
}

// Função para avaliar o colesterol total e imprimir o resultado
void avaliarColesterolTotal(float valor) {
    printf("Colesterol total %.1f mg/dl (", valor);

    if (valor < 0) {
        printf("Algum valor fora da faixa)\n");
    } else if (valor < 150) {
        printf("DESEJAVEL)\n");
    } else if (valor >= 150 && valor <= 170) {
        printf("LIMITROFE)\n");
    } else if (valor > 170) {
        printf("ALTO)\n");
    }
}

int main() {
    // Declaração de variáveis
    int triglicerideos;
    float colesterolTotal;

    // Leitura dos valores
    scanf("%d", &triglicerideos);
    scanf("%f", &colesterolTotal);

    // Avaliação dos triglicerídeos e colesterol total
    if (triglicerideos >= 0 && colesterolTotal >= 0) {
        avaliarTriglicerideos(triglicerideos);
        avaliarColesterolTotal(colesterolTotal);
    } else {
        printf("Algum valor fora da faixa\n");
    }

    return 0;
}
