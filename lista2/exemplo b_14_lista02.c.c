/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

14.Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em 
um vetor com 10 posições. Preencha um segundo vetor apenas com os números 
ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int vetor[10],vetor2[10]={0,0,0,0,0,0,0,0,0,0}, i=0, j=0, qnt=0;
	//Vetor de todos os números, vetor dos números ímpares, Variáveis de controle e Quantidade de ímpares
	for(i=0;i<10;i++)
	{
		printf("Insira o %d° número: ", i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i]<0 || vetor[i]>50)
		{
			printf("Número Inválido\n");
			i--;
		}
		else if((vetor[i]%2)!=0)
		{
		    vetor2[j]=vetor[i];
		    j++;
		    qnt++;
		}
	}
	
	printf("\n");
	for(j=0;j<qnt;j++)
	{
		printf("%d %d\n", vetor[j], vetor2[j]);
	}
	
    for(j=qnt;j<10;j++)
    //Depois que o primeiro vetor termina, esse retoma imprimindo apenas um vetor
	{
		printf("%d\n", vetor[j]);
	}
	
	return 0;
}


