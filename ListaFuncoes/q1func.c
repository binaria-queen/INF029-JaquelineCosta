#include <stdio.h>
#include <stdlib.h>


int soma (int x, int y)
{
  int resultado;
  resultado = x + y;

  return resultado;
}

main (){

  int num1, num2;
  int resultado_soma;
  
  printf("Digite os dois valores para efetuar a soma:\n");
  scanf("%d %d", &num1, &num2);
  resultado_soma = soma(num1,num2);

  printf("A soma de %d" " + " "%d" " = " "%d", num1, num2, resultado_soma);

  return 0;
  system("pause");
}

