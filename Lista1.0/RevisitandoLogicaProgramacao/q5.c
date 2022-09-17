#include <stdio.h>

int main(){
  int idade;

  do{
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
  
    if(idade >= 18){
      printf("Você é maior de idade!\n\n");
    }else{
      printf("Você é menor de idade!\n\n");
    }
  }while(idade >=0);
}