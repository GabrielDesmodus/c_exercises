/*
Gabriel Santos S�
3005461
Turma B

Lista 2

14.Escreva um programa que leia n�meros inteiros no intervalo [0,50] e os armazene em 
um vetor com 10 posi��es. Preencha um segundo vetor apenas com os n�meros 
�mpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int vetor[10],vetor2[10]={0,0,0,0,0,0,0,0,0,0}, i=0, j=0, qnt=0;
	//Vetor de todos os n�meros, vetor dos n�meros �mpares, Vari�veis de controle e Quantidade de �mpares
	for(i=0;i<10;i++)
	{
		printf("Insira o %d� n�mero: ", i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i]<0 || vetor[i]>50)
		{
			printf("N�mero Inv�lido\n");
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


