#include <stdio.h>

int main() {
float D, QT, T;
scanf("%f %f", &D, &QT);

T = QT/D;
  if (T<=100/1){
    printf ("%.2f", D*90);}
  if (T>100/1){
    printf ("%.2f" ,(((D*90)+(((T-100)*D)*12))));}


	return 0;
}
