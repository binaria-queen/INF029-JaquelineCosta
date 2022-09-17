#include <stdio.h>

int main(){
  int valor1, valor2, valorInvertido;
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);

  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);
  
  printf("O primeiro valor = %d segundo valor = %d \n", valor1, valor2);

  valorInvertido = valor1;
  valor1 = valor2;
  valor2 = valorInvertido;
   printf("Agora o primeiro valor = %d o segundo valor = %d \n", valor1, valor2);
}