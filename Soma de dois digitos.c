#include <stdio.h>

int main(){
int numero, soma, resto;
scanf("%d", &numero);

    if (numero > 0){
        soma = 0;}
        while (numero != 0){
            resto = numero % 10;
            numero = (numero - resto)/10;
            soma = soma + resto;
        printf("%d",soma);}

    return 0;
}
