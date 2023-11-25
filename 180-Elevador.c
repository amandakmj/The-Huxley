#include <stdio.h>

int main() {
    int N, C;
    scanf("%d %d", &N, &C);

    int ocupacao = 0;
    int excedeuCapacidade = 0;

    for (int i = 0; i < N; i++) {
        int S, E;
        scanf("%d %d", &S, &E);

        ocupacao = ocupacao - S + E;

        if (ocupacao > C) {
            excedeuCapacidade = 1;
            break;
        }
    }

    if (excedeuCapacidade) {
        printf("S");
    } else {
        printf("N");
    }

    return 0;
}
