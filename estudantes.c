#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "escola.h"
#include "estudantes.h"

int menuEstudante(){

	int opcao;

	printf("##### Tópico de Estudantes #####\n");
	printf("##### Digite uma opcao #####\n");
	printf("0 - Voltar para o menu principal\n");
	printf("1 - Inserir estudante\n");
	printf("2 - Listar estudantes\n");
	scanf("%d", &opcao);

	return opcao;
}

void mainEstudante(Estudante** iniciarListaEstudante){
	int opcao, retorno;
	int sair = 0;

	while(!sair){

		opcao = menuEstudante();
		switch(opcao){
			case 0:{
				sair = 1;
				break;
			}
			case 1:{
				retorno = inserirEstudante(iniciarListaEstudante);
				break;
			}
			case 2:{
				listarEstudantes(iniciarListaEstudante);
				break;
			}default:{
				printf("Opcao invalida\n");
			}
		}
	}
}