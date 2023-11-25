#include <stdio.h>

int main() {
    char caractere;
    int contador = 0;

    while (scanf("%c", &caractere) == 1 && caractere != '\n') {
        if (caractere == 'a' || caractere == 'A') {
            contador++;
        }
    }

    printf("%d", contador);

    return 0;
}
