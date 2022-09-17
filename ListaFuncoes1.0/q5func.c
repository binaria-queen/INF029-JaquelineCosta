#include <stdio.h>
#include <stdlib.h>


typedef struct
{
  int dia, mes, ano, horario;
}DiaNasc;

typedef struct
{
  DiaNasc diaNasc;

}Estudante;

void imprimirEstudante (Estudante a)
{  

  printf("Seu ciclo de vida começou em: %d/%d/%d\n Às %d:%d.", a.diaNasc.dia, a.diaNasc.mes, a.diaNasc.ano, a.diaNasc.horario);
}

Estudante lerEstudante()
{
  Estudante a;

  printf("Digite sua data de nascimento: ");
  scanf("%d %d %d", &a.diaNasc.dia, &a.diaNasc.mes, &a.diaNasc.ano);
  getchar();
  printf("Digite o horario do seu nascimento(no formato 00:00): ");
  scanf("%d", &a.diaNasc.horario);

  return a;
}

int main()
{
  Estudante estudante;

  estudante = lerEstudante();
  
  imprimirEstudante(estudante);

  return 0;
}