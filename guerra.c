#include <stdio.h>
#include <stdlib.h>

int main(){
  int n,i,soma=0,x=0,div=0;
  scanf("%d",&n);
  int *parte;
  parte = (int *) malloc(n*sizeof(int));
  for(i=0;i<n;i++){
    scanf("%d",&parte[i]);
  }
  for(i=0;i<n;i++){
    soma+=parte[i];
  }
  i=0;
  while(div<=(soma/2)){
    div+=parte[i];
    i++;
    x++;
  }
  x--;
  printf("%d\n",x);
  return 0;
}
