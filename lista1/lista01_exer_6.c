/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

6) Fa�a um programa que leia valores e escreva no final a soma dos valores positivos e a m�dia dos
negativos. Neste programa o usu�rio � quem vai determinar o fim da leitura dos n�meros, ou seja,
voc� dever� perguntar ao usu�rio se ele deseja continuar digitando valores.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float NUMERO, MEDIA =0, SOMAN = 0, SOMAP = 0, CONTA = 0;
	//N�mero dado pelo usu�rio, m�dia dos n�meros negativos, soma dos n�meros negativos, soma dos positivos, n�mero de n�meros negativos
	char RESPOSTA;
	//Resposta dada pelo usu�rio
	
	while(RESPOSTA !='S')
	{
		printf("Digite um n�mero: \n");
		
		scanf("%f", &NUMERO);
		
		if(NUMERO >= 0)
		{
			SOMAP = SOMAP + NUMERO;	
		}
		else
		{
			SOMAN = SOMAN + NUMERO;
			CONTA++;
		}
		printf("Deseja terminar a leitura dos n�meros? Digite 'S' para sim\n");
		scanf(" %c", &RESPOSTA);	
	
	}
	if(CONTA == 0)
	{
		MEDIA = 0;
	}
	//Evitando que exista uma divis�o por 0
	else
	{
		MEDIA = SOMAN/CONTA;
	}

	printf("Soma dos valores positivos: %f\nM�dia dos valores negativos: %f", SOMAP, MEDIA);
	
	return 0;
}
