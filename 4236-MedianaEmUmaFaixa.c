#include <stdio.h>
#include <stdlib.h>

// Função para calcular a mediana de um conjunto de valores dentro de uma faixa específica
void calcularMediana(int valores[], int n, int minimo, int maximo) {
    // Filtra os valores dentro da faixa [minimo, maximo]
    int *valoresFiltrados = malloc(n * sizeof(int));
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (valores[i] >= minimo && valores[i] <= maximo) {
            valoresFiltrados[k++] = valores[i];
        }
    }

    // Ordena os valores filtrados em ordem crescente
    for (int i = 0; i < k - 1; i++) {
        for (int j = 0; j < k - i - 1; j++) {
            if (valoresFiltrados[j] > valoresFiltrados[j + 1]) {
                // Troca os valores
                int temp = valoresFiltrados[j];
                valoresFiltrados[j] = valoresFiltrados[j + 1];
                valoresFiltrados[j + 1] = temp;
            }
        }
    }

    // Calcula a mediana
    if (k % 2 == 1) {
        // Se a quantidade de números for ímpar
        printf("%d\n", valoresFiltrados[k / 2]);
    } else {
        // Se a quantidade de números for par
        double mediana = (valoresFiltrados[k / 2 - 1] + valoresFiltrados[k / 2]) / 2.0;
        printf("%.2lf\n", mediana);
    }

    // Imprime os valores ordenados
    for (int i = 0; i < k; i++) {
        if (i > 0) {
            printf(",");
        }
        printf("%d", valoresFiltrados[i]);
    }

    free(valoresFiltrados);
}

int main() {
    // Tamanho máximo do conjunto de valores
    const int MAX_VALORES = 100;

    // Entrada de dados
    int valores[MAX_VALORES];
    int n;
    printf("Digite os valores, separados por vírgula:\n");
    char c;
    int i = 0;
    while (scanf("%d%c", &valores[i], &c) == 2) {
        i++;
        if (c == '\n') {
            break;
        }
    }
    n = i;

    int minimo, maximo;
    printf("Digite o valor mínimo:\n");
    scanf("%d", &minimo);
    printf("Digite o valor máximo:\n");
    scanf("%d", &maximo);

    // Calcula e imprime a mediana
    calcularMediana(valores, n, minimo, maximo);

    return 0;
}
