#include <stdio.h>
#include <math.h>

int encaixa(int a, int b){
  int x=0,exp,y,aux;
  aux = b;
    while(b!=0){
      b/=10;
      x++;
    }
  exp = pow(10,x);
  if(a%exp==aux)
    return 1;
  else
    return 0;
}

int segmento(int a, int b){
  int i=1,aux,j;
  if(encaixa(a,b)==1){
    return 1;
  }
  else if(a>=b){
    aux = a;
    while(aux/10!=0){
      i++;
      aux/=10;
    }
    for(j=0;j<i;j++){
      if(encaixa(a,b)==1)
        return 1;
      a/=10;
    }
  }
  else if(b>a){
    aux = b;
    while(aux/10!=0){
      i++;
      aux/=10;
    }
    for(j=0;j<i;j++){
      if(encaixa(b,a)==1)
        return 1;
      b/=10;
    }
  }
  return 0;
}
