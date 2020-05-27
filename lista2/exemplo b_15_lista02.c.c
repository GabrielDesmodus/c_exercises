/*
Gabriel Santos S�
3005461
Turma B

Lista 2

15.Fa�a um programa em C que armazene 15 n�meros inteiros em um vetor e depois permita que o usu�rio digite um n�mero inteiro para ser buscado no vetor, se for 
encontrado o programa deve imprimir a posi��o desse n�mero no vetor, caso 
contr�rio, deve imprimir a mensagem: "N�o encontrado!"*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int vetor[15], i, num;
	//Vetor, v�riavel de controle e N�mero digitado
	bool encontrado=false;
	//Vari�vel que verifica se um n�mero foi encontrado
	
	for(i=0;i<15;i++)
	{
		printf("Digite a posi��o %d: \n", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite o n�mero para ser buscado\n");
	scanf("%d", &num);
	
	for(i=0;i<15;i++)
	{
		if(vetor[i]==num)
		{
			printf("Encontrado na posi��o %d\n", i);
			encontrado=true;
		}
	}
	
	if(encontrado==false)
	{
		printf("N�o encontrado!");
	}
	return 0;
}
