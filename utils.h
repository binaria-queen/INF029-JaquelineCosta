typedef struct dataMesAno {
	char data[11];
	int dia;
	int mes;
	int ano;
} Data;

int validacao_data(char data[]);
int validacao_data_completa(int dia, int mes, int ano);