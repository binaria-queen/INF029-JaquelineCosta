typedef struct atributos_estudante {
	int matricula;
	char nome[50];
	char sexo;
	Data dataNasc;
	char cpf[15];
	struct atributos_estudante *prox
		
} Estudante;

void mainEstudante(Estudante** iniciarListaEstudante);
int menuEstudante();
//int inserirEstudante();
//void listarEstudantes(Estudante** iniciarListaEstudante);
