#include <stdio.h>
#include <string.h>

int main(){
  char palavra[40],frase[10000],nova[40];
  int xesque=0,i,j,tamanho=0,tamanho1 = 0;
  scanf("%[^\n]s",frase);
  scanf("%s%s",palavra,nova);
  tamanho = 0;
  while(frase[tamanho]!='\0'){
    tamanho++;
  }
  tamanho1 = 0;
  while(palavra[tamanho1]!='\0'){
    tamanho1++;
  }
    for(i=0;i<tamanho;i++){
      xesque = 0;
      if(i+tamanho-1>tamanho){
        printf("%c",frase[i]);
      }
      else{
      for(j=0;j<tamanho1;j++){
        if(palavra[j]!=frase[i+j])
          xesque = 1;
      }
    if(xesque==0){
      printf("%s",nova);
      i+=tamanho-1;
    }
    else
      printf("%c",frase[i]);
    }
  }
  printf("\n");
  return 0;
}
