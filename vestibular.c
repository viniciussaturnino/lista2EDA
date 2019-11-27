#include <stdio.h>

int main(){
  int i,n,x=0;
  scanf("%d",&n);
  char qst[n],resp[n];
  scanf("%s%s",qst,resp);
  for(i=0;i<n;i++){
    if(resp[i]==qst[i]){
      x++;
    }
  }
  printf("%d\n",x);
  return 0;
}
