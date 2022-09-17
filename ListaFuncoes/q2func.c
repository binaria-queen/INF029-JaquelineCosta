#include <stdio.h>
#include <stdlib.h>

//retornar o resultado da subtração
int subtrai (int x, int y, int j)
{
  int resultado;
  resultado = ((x - y) - j);

  return resultado;
}

int main (){

  int num1, num2, num3;
  int resultado_subtracao;
  
  printf("Digite os tres valores para efetuar a subtracao:\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  resultado_subtracao = subtrai(num1,num2,num3);

printf("%d" " - " "%d" " - " "%d" " = " "%d\n",     num1, num2, num3, resultado_subtracao);

  return 0;
  system("pause");
}