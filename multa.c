#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia){
  double vm;
  double d;
  d = distancia*1000;
  vm = d/(tB-tA);
  return vm*3.6;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima){
  int x;
  x = calculaVelocidadeMedia(tA,tB,distancia);
  if(x>velocidadeMaxima)
    return 1;
  else if(x<=velocidadeMaxima)
    return 0;
}
