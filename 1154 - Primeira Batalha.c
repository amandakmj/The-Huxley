#include <stdio.h>

int main() {
  int p,s,t;
  scanf("%d %d %d ",&p,&s,&t);
  if ((p>10 || s>10 || t>10) && (p%2==0 || s%2==0 || t%2==0) && (p!=0 && s!=0 && t!=0)){
    printf("Sim");
    }
  else{
    printf("Não");
  }
    return 0;
}
