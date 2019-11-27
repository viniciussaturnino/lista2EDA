#include <stdio.h>

int main(){
  int n,t,x=0,maior=0,aux,z=0,xesque=0,menor=0,var=0;
  scanf("%d%d",&n,&t);
  int v[n];
  for(int i=0;i<n;i++)
    do {
      scanf("%d",&v[i]);
    } while(v[i]>t||v[i]<=0);
  for(int j=0;j<n;j++)
    for(int z=j+1;z<n;z++)
      if(v[j]>=v[z]){
        maior = v[j];
        v[j] = v[z];
        v[z] = maior;
      }
    for(int j=1;j<=t;j++){
      xesque=0;
      while(v[z]==j){
        xesque++;
        z++;
      }
      if(var==0){
        menor = xesque;
        var = 1;
      }
      if(xesque<menor)
        menor = xesque;
    }
      printf("%d\n",menor);
  return 0;
}
