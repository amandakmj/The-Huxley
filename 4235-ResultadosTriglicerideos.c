#include <stdio.h>

int main() {
    // Declaração de variáveis
    int desejavel = 0, limitrofe = 0, alto = 0, total = 0;
    int resultado;

    // Leitura dos resultados dos exames
    while (scanf("%d", &resultado) == 1) {
        // Verifica se a entrada é o caractere asterisco
        if (resultado == '*') {
            break;
        }

        // Classificação do resultado
        if (resultado < 150) {
            desejavel++;
        } else if (resultado >= 150 && resultado <= 200) {
            limitrofe++;
        } else {
            alto++;
        }

        total++;
    }

    // Cálculo dos percentuais
    double percentualDesejavel = (desejavel * 100.0) / total;
    double percentualLimitrofe = (limitrofe * 100.0) / total;
    double percentualAlto = (alto * 100.0) / total;

    // Impressão dos resultados
    printf("Desejavel: %d(%.1lf%%)\n", desejavel, percentualDesejavel);
    printf("Limitrofe: %d(%.1lf%%)\n", limitrofe, percentualLimitrofe);
    printf("Alto: %d(%.1lf%%)\n", alto, percentualAlto);

    // Verifica se a quantidade de ALTO está acima do normal
    if (percentualAlto >= 50.0) {
        printf("Quantidade de ALTO acima do normal\n");
    }

    return 0;
}
