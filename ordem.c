#include <stdio.h>

int main(){
  int a,i,x,n,j,z,xesque=0,tamanho=0;
  char palavra[42],aux[42];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    xesque = 0;
    scanf("%s",palavra);
    tamanho = 0;
    while(palavra[tamanho]!='\0'){
      tamanho++;
    }
    x=tamanho;
    for(a=0;a<x;a++){
      aux[a] = palavra[a];
    }
    for(z=0;z<x;z++){
      if(aux[z]>=65&&aux[z]<=90)
        aux[z]+=32;
    }
    for(j=0;j<x-1;j++){
      if(aux[j]>=aux[j+1])
        xesque++;
    }
    if(xesque!=0)
      printf("%s: N\n",palavra);
    else
      printf("%s: O\n",palavra);
}
  return 0;
}
