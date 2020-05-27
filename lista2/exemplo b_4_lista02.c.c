/*
Gabriel Santos S�
3005461
Turma B

Lista 2

4. Fa�a uma fun��o que receba um n�mero de 1 a 12 e exiba na tela o m�s
correspondente ao n�mero e a quantidade de dias correspondente ao m�s.
*/

#include <stdio.h>
#include <locale.h>

void meses(int month)
//Fun��o que recebe os n�meros e imprime na tela o correspondente e o n�mero de dias
{
	switch(month)
	{
		case 1:
			printf("\nM�s: Janeiro. Possui 31 dias");
			break;
		case 2:
			printf("\nM�s: Fevereiro. Possui 28 dias");
			break;
		case 3:
			printf("\nM�s: Mar�o. Possui 31 dias");
			break;
		case 4:
			printf("\nM�s: Abril. Possui 30 dias");
			break;
		case 5:
			printf("\nM�s: Maio. Possui 31 dias");
			break;
		case 6:
			printf("\nM�s: Junho. Possui 30 dias");
			break;
		case 7:
			printf("\nM�s: Julho. Possui 31 dias");
			break;
		case 8:
			printf("\nM�s: Agosto. Possui 31 dias");
			break;
		case 9:
			printf("\nM�s: Setembro. Possui 30 dias");
			break;
		case 10:
			printf("\nM�s: Outubro. Possui 31 dias");
			break;
		case 11:
			printf("\nM�s: Novembro. Possui 30 dias");
			break;
		case 12:
			printf("\nM�s: Dezembro. Possui 31 dias");
			break;
	}
	return;
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int month;
	//Vari�vel que recebe o n�mero do m�s
	printf("Insira o n�mero do m�s:\n");
	scanf("%d", &month);
	meses(month);
	return 0;
}
