#include <stdio.h>

int main(){
  int numeros[10];
  int primos[10];

  for(int i = 0; i < 10; i++){
    primos[i] = 1; 
  }
  
  for(int i = 0; i < 10; i++){
    printf("Digite o numero da posicao %d: ", i);
    scanf("%d", &numeros[i]);
  }
  
  for(int i = 0; i < 10; i++){
   for(int j = 2; j < numeros[i]; j++){
      if(numeros[i] % j == 0){
        primos[i] = 0;
        break;
      }
    }
  }

  int soma = 0;
  printf("Os numeros primos sao: \n");
  for(int i = 0; i < 10; i++){
    if(primos[i] == 1){
      soma = soma + numeros[i];
      printf("%d, ", numeros[i]);
    }
  }
}