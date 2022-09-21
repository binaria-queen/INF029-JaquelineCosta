#include <stdio.h>

int main(){
  int numero;
  
  printf("Digite um numero:\n");
  scanf("%d", &numero);

  int primo = 1; 
  for(int i = 2; i < numero; i++)
    if(numero % 2 == 0){
      primo = 0;
      break;
    }
  if(primo == 1){
    printf("O numero %d eh primo.", numero);
  } else {
    printf("O numero %d nao eh primo.", numero);
    }
}