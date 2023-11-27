#include <stdio.h>

int main() {
    int n;

    // Leitura do tamanho dos arrays
    scanf("%d", &n);

    // Declaração dos arrays
    int array1[n], array2[n];

    // Leitura dos elementos do primeiro array
    for (int i = 0; i < n; i++) {
        scanf("%d", &array1[i]);
    }

    // Leitura dos elementos do segundo array
    for (int i = 0; i < n; i++) {
        scanf("%d", &array2[i]);
    }

    // Intercalação dos arrays e impressão
    for (int i = 0; i < n; i++) {
        printf("%d\n", array1[i]);
        printf("%d\n", array2[i]);
    }

    return 0;
}
