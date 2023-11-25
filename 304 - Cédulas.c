#include <stdio.h>

/* n1=100, n2=50, n3=20, n4=10, n5=5, n6=2, n7=1, R=resto, N= número*/

int main(){
int N, N1, N2, N3, N4, N5, N6, N7, R1, R2, R3, R4, R5, R6, R7;
scanf ("%d", &N);

    N1=(N/100);
    R1=(N-(N1*100));
    N2=(R1/50);
	R2=(N-(N2*50)-(N1*100));
	N3=(R2/20);
    R3=(N-(N3*20)-(N2*50)-(N1*100));
	N4=(R3/10);
	R4=(N-(N4*10)-(N3*20)-(N2*50)-(N1*100));
	N5=(R4/5);
	R5=(N-(N5*5)-(N4*10)-(N3*20)-(N2*50)-(N1*100));
    N6=(R5/2);
    R6=(N-(N6*2)-(N5*5)-(N4*10)-(N3*20)-(N2*50)-(N1*100));
    N7=(R6/1);

	printf("%d\n", N);
	printf("%d nota(s) de R$ 100,00\n", N1);
	printf("%d nota(s) de R$ 50,00\n", N2);
	printf("%d nota(s) de R$ 20,00\n", N3);
	printf("%d nota(s) de R$ 10,00\n", N4);
	printf("%d nota(s) de R$ 5,00\n", N5);
	printf("%d nota(s) de R$ 2,00\n", N6);
	printf("%d nota(s) de R$ 1,00\n", N7);

	return 0;
}
