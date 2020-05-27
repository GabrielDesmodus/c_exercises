/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

15.Faça um programa em C que armazene 15 números inteiros em um vetor e depois permita que o usuário digite um número inteiro para ser buscado no vetor, se for 
encontrado o programa deve imprimir a posição desse número no vetor, caso 
contrário, deve imprimir a mensagem: "Não encontrado!"*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int vetor[15], i, num;
	//Vetor, váriavel de controle e Número digitado
	bool encontrado=false;
	//Variável que verifica se um número foi encontrado
	
	for(i=0;i<15;i++)
	{
		printf("Digite a posição %d: \n", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite o número para ser buscado\n");
	scanf("%d", &num);
	
	for(i=0;i<15;i++)
	{
		if(vetor[i]==num)
		{
			printf("Encontrado na posição %d\n", i);
			encontrado=true;
		}
	}
	
	if(encontrado==false)
	{
		printf("Não encontrado!");
	}
	return 0;
}
