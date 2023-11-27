#include <stdio.h>

int main() {
    // Declaração de variáveis
    double rendaFixaNacional, rendaFixaInternacional, rendaVariavelNacional, rendaVariavelInternacional;

    // Leitura dos valores de renda fixa e variável
    scanf("%lf %lf %lf %lf", &rendaFixaNacional, &rendaFixaInternacional, &rendaVariavelNacional, &rendaVariavelInternacional);

    // Cálculo do total investido
    double totalInvestido = rendaFixaNacional + rendaFixaInternacional + rendaVariavelNacional + rendaVariavelInternacional;

    // Cálculo do percentual de renda variável
    double percentualRendaVariavel = (rendaVariavelNacional + rendaVariavelInternacional) / totalInvestido * 100;

    // Determinação do perfil do investidor
    const char* perfil;

    if (percentualRendaVariavel > 30.0) {
        perfil = "Agressivo";
    } else if (percentualRendaVariavel > 10.0) {
        perfil = "Arrojado";
    } else {
        perfil = "Conservador";
    }

    // Impressão do resultado
    printf("%s (%.2lf%%)\n", perfil, percentualRendaVariavel);

    return 0;
}
