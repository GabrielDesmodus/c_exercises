/*
Gabriel Santos S�
3005461
Turma B

Lista 2

1. Escrever um programa que declare, inicialize e imprima um vetor de 10 inteiros. O
vetor deve conter os 10 primeiros m�ltiplos de 5. A inicializa��o do vetor e a sua
impress�o devem ser feitas por fun��es.
*/

#include <stdio.h>

int vector[10];

void inic()
{
	int i;
	for(i=1;i<=10;i++)
	{
		vector[i]=i*5;
	}
	return;
}

void impres()
{
	int i;
	for(i=1;i<=10;i++)
	{
		printf("%d\n", vector[i]);
	}
	return;
}

int main()
{
	inic();
	impres();
	return 0;
}
