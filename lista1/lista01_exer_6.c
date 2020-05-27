/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

6) Faça um programa que leia valores e escreva no final a soma dos valores positivos e a média dos
negativos. Neste programa o usuário é quem vai determinar o fim da leitura dos números, ou seja,
você deverá perguntar ao usuário se ele deseja continuar digitando valores.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float NUMERO, MEDIA =0, SOMAN = 0, SOMAP = 0, CONTA = 0;
	//Número dado pelo usuário, média dos números negativos, soma dos números negativos, soma dos positivos, número de números negativos
	char RESPOSTA;
	//Resposta dada pelo usuário
	
	while(RESPOSTA !='S')
	{
		printf("Digite um número: \n");
		
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
		printf("Deseja terminar a leitura dos números? Digite 'S' para sim\n");
		scanf(" %c", &RESPOSTA);	
	
	}
	if(CONTA == 0)
	{
		MEDIA = 0;
	}
	//Evitando que exista uma divisão por 0
	else
	{
		MEDIA = SOMAN/CONTA;
	}

	printf("Soma dos valores positivos: %f\nMédia dos valores negativos: %f", SOMAP, MEDIA);
	
	return 0;
}
