#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para comparar elementos durante a ordenação
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    // Leitura dos valores
    char input[100];
    fgets(input, sizeof(input), stdin);

    // Remover o caractere de nova linha (\n) da string input
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    // Leitura do mínimo
    int min;
    scanf("%d", &min);

    // Leitura do máximo
    int max;
    scanf("%d", &max);

    // Inicialização do array para armazenar os valores
    int values[100];
    int count = 0;

    // Processamento dos valores de entrada
    char *token = strtok(input, ",");
    while (token != NULL) {
        int value = atoi(token);
        if (value >= min && value <= max) {
            values[count++] = value;
        }
        token = strtok(NULL, ",");
    }

    // Ordenação dos valores
    qsort(values, count, sizeof(int), compare);

    // Impressão dos valores ordenados
    for (int i = 0; i < count; i++) {
        printf("%d", values[i]);
        if (i < count - 1) {
            printf(",");
        }
    }
    printf("\n");

    // Cálculo e impressão da mediana
    if (count % 2 == 1) {
        printf("%.2f\n", (float)values[count / 2]);
    } else {
        printf("%.2f\n", (float)(values[count / 2 - 1] + values[count / 2]) / 2);
    }

    return 0;
}
