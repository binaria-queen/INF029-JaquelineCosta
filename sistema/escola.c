/**
Projeto Escola: Sistema de Controle de uma escola.

Realizado no contexto da disciplina INF029 - Laboratório de Programação do curso de Análise e Desenvolvimento 
de Sistemas do Instituto Federal da Bahia - campus Salvador.

Semestre: 2022.2

Docente: Renato Novais

Discente: Jaqueline Gabriela Santos Costa 

@2022

*/

#include <stdio.h>
#include "estudantes.h"


int menuGeral(){
	
	int opcaoSelecionada;

	printf("------------ Digite uma opcao: ------------\n");
	printf("0 - Sair\n");
	printf("1 - Gerenciar Estudantes\n");
	printf("2 - Gerenciar Professores\n");
	printf("3 - Gerenciar Disciplinas\n");

	scanf("%d", &opcaoSelecionada);

	return opcaoSelecionada;
}

int main(){
	Estudante estudante;
	Estudante iniciarListaEstudante = NULL;

	int opcao, retorno;
	int sair = 0;

	opcao = menuGeral();
	switch(opcaoSelecionada){
		case 0:{
			printf("Finalizando Cadastro Escola\n");
			sair = 1;
			break;
		}
		case 1:{
			mainEstudante(&iniciarListaEstudante);
			break;
		}
		case 2:{
			printf("Gerenciando professores\n");
		}
		case 3:{
			printf("Gerenciando Disciplinas\n");
		}default:{
			printf("Opcao invalida!\n");

		}
	}
}