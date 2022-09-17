#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int dia, mes, ano;
}DataNascimento;

typedef struct
{
  DataNascimento dataNas;
  int idade;
  char sexo;
  char nome [100];
}Pessoa;

void imprimirPessoa(Pessoa p)
{
  printf("Nome: %c\n", p.nome);
  printf("Idade: %d\n", p.idade);
  printf("Sexo: %c\n", p.sexo);
  printf("Data de nascimento: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano);
}

Pessoa lerPessoa()
{
  Pessoa p; 
  printf("Digite o seu nome: ");
  fgets(p.nome, 100, stdin);
  printf("Digite a sua idade: ");
  scanf("%d", &p.idade);
  printf("Digite F ou M para o sexo: ");
  scanf("%c",&p.sexo);
  getchar( ); 
  printf("Digite a sua data de nascimento no formato dd mm aaaa: ");
  scanf("%d%d%d", &p.dataNas.dia, &p.dataNas.mes, &p.dataNas.ano);  
  return p;
}
int main(){

  Pessoa pessoa;

  pessoa = lerPessoa(); 
  imprimirPessoa(pessoa);

  return 0;
  
}