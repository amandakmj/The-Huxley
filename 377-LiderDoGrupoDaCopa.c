#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Variáveis para armazenar informações dos times
    char nome_time1[100], nome_time2[100];
    int pontos_time1, saldo_gols_time1, gols_feitos_time1;
    int pontos_time2, saldo_gols_time2, gols_feitos_time2;

    // Leitura dos dados do primeiro time
    scanf("%s %d %d %d", nome_time1, &pontos_time1, &saldo_gols_time1, &gols_feitos_time1);

    // Leitura dos dados do segundo time
    scanf("%s %d %d %d", nome_time2, &pontos_time2, &saldo_gols_time2, &gols_feitos_time2);

    // Verifica o vencedor com base nos critérios especificados
    if (pontos_time1 > pontos_time2 ||
        (pontos_time1 == pontos_time2 && saldo_gols_time1 > saldo_gols_time2) ||
        (pontos_time1 == pontos_time2 && saldo_gols_time1 == saldo_gols_time2 && gols_feitos_time1 > gols_feitos_time2)) {
        // Converte o nome do time para minúsculas
        for (int i = 0; i < strlen(nome_time1); i++) {
            nome_time1[i] = tolower(nome_time1[i]);
        }
        printf("%s\n", nome_time1);
    } else if (pontos_time2 > pontos_time1 ||
               (pontos_time2 == pontos_time1 && saldo_gols_time2 > saldo_gols_time1) ||
               (pontos_time2 == pontos_time1 && saldo_gols_time2 == saldo_gols_time1 && gols_feitos_time2 > gols_feitos_time1)) {
        // Converte o nome do time para minúsculas
        for (int i = 0; i < strlen(nome_time2); i++) {
            nome_time2[i] = tolower(nome_time2[i]);
        }
        printf("%s\n", nome_time2);
    } else {
        printf("EMPATE\n");
    }

    return 0;
}

