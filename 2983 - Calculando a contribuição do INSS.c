#include <stdio.h>
#include <math.h>

int main(){
    float salario, desconto;
    scanf ("%f", &salario);
    int centavos = round(salario * 100);

    if (centavos < 175182)
        desconto = centavos * 0.08 / 100;
    else if (centavos>175181 && centavos<=291972)
        desconto = centavos * 0.09 / 100;
    else if (centavos>291972 && centavos<=583945)
        desconto = centavos * 0.11 / 100;
    else if (centavos>583945)
        desconto = 642.34;

    printf ("Desconto do INSS: R$ %.2f", desconto);

    return 0;
}
