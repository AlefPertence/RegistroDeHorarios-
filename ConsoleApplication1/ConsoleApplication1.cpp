#include <stdio.h>
#include <locale.h>

struct horario {
	int hora;
	int minuto;
	int segundo;

};
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil.1252");

	void receberHorarios(struct horario lista[5]);
	void PrintHorarios(struct horario lista[5]);

	struct horario listaHorarios[5];

	receberHorarios(listaHorarios);

	PrintHorarios(listaHorarios);
	return 0;
}


void receberHorarios(struct horario lista[5]) {

	int i;
	for (i = 0;i < 5;i++) {

	 printf("digite o % i horario(hh:mm:ss): ", i+1);
	 scanf_s("%i:%i:%i", &lista[i].hora, &lista[i].minuto, &lista[i].segundo);

	}


}

void PrintHorarios(struct horario lista[5]) {

	int i;
	for (i = 0;i < 5;i++) {

		printf("O %i horario é = %i:%i:%i \n", i + 1, lista[i].hora, lista[i].minuto, lista[i].segundo);
		
	}
}