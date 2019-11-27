#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,n,t,menor=0,aux;
  scanf("%d%d",&n,&t);
  int *bala;
  bala = (int *) malloc(t*sizeof(int));
  for(i=0;i<t;i++){
    bala[i]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d",&aux);
    bala[aux-1]++;
  }
  for(i=t-1;i>=0;i--){
    if(i==t-1){
      menor = bala[i];
    }
    else if(bala[i]<menor){
      menor = bala[i];
    }
  }
  printf("%d\n",menor);
  return 0;
}
