/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

11.Construa um programa em C que leia valores inteiros para a matriz A 3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos de
uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada e da
saída.
*/ 

#include <stdio.h>

int main()
{
	int i, j, matriz[3][5], SOMACOLUNA[3]={0,0,0};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Linha %d, Coluna %d: ", i,j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			SOMACOLUNA[i]=SOMACOLUNA[i]+matriz[i][j];
		}
	}
	
	printf("\nSoma das linhas\n");
	
	for(i=0;i<3;i++)
	{
		printf("\nSoma da linha %d: %d\n", i, SOMACOLUNA[i]);
	}
	return 0;
}

