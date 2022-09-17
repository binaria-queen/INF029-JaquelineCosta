#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char main(){
  char letra1, letra2, letra3;
  imprimeLetras(&letra1, &letra2, &letra3);
  printf("%c %c %c", &letra1, &letra2, &letra3); 
}

char imprimeLetras(char l1, char l2, char l3){
  printf("Insira 3 letras: \n");
  scanf("%c %c %c", &l1, &l2, &l3);
}

