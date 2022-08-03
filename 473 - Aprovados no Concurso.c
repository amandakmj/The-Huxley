#include <stdio.h>

int main(){
    int port, mat, aprovado = 0;
    float red;

    while(port>0){
        scanf(" %d", &port);
        scanf(" %d", &mat);
        scanf(" %f", &red);
        if (port>=40 && mat>=21 && red>=7)
            aprovado++;
    }
    printf("%d", aprovado);
    return 0;
}
