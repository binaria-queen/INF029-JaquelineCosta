#include <stdio.h>

int main(){
  int idade1, idade2, somaIdades;
  
  printf("Digite a primeira idade: ");
  scanf("%d", &idade1);

  printf("Digite a segunda idade: ");
  scanf("%d", &idade2);

  somaIdades = idade1 + idade2;
  printf("A soma de %d + %d = %d", idade1, idade2, somaIdades);
  
  
}