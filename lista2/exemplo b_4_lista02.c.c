/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

4. Faça uma função que receba um número de 1 a 12 e exiba na tela o mês
correspondente ao número e a quantidade de dias correspondente ao mês.
*/

#include <stdio.h>
#include <locale.h>

void meses(int month)
//Função que recebe os números e imprime na tela o correspondente e o número de dias
{
	switch(month)
	{
		case 1:
			printf("\nMês: Janeiro. Possui 31 dias");
			break;
		case 2:
			printf("\nMês: Fevereiro. Possui 28 dias");
			break;
		case 3:
			printf("\nMês: Março. Possui 31 dias");
			break;
		case 4:
			printf("\nMês: Abril. Possui 30 dias");
			break;
		case 5:
			printf("\nMês: Maio. Possui 31 dias");
			break;
		case 6:
			printf("\nMês: Junho. Possui 30 dias");
			break;
		case 7:
			printf("\nMês: Julho. Possui 31 dias");
			break;
		case 8:
			printf("\nMês: Agosto. Possui 31 dias");
			break;
		case 9:
			printf("\nMês: Setembro. Possui 30 dias");
			break;
		case 10:
			printf("\nMês: Outubro. Possui 31 dias");
			break;
		case 11:
			printf("\nMês: Novembro. Possui 30 dias");
			break;
		case 12:
			printf("\nMês: Dezembro. Possui 31 dias");
			break;
	}
	return;
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int month;
	//Variável que recebe o número do mês
	printf("Insira o número do mês:\n");
	scanf("%d", &month);
	meses(month);
	return 0;
}
