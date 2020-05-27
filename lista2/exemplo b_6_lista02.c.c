/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

6. Faça um programa para imprimir:
 1
 2 2
 3 3 3
 .....
 n n n n n n ... n
Para um n informado pelo usuário. Use uma função que receba um valor n inteiro e imprima até a n-ésima
linha.
*/

#include <stdio.h>
#include <locale.h>

void prog(int N)
{
	int i, num;
	//Variável de controle e váriavel que recebe o número de vezes que o número será repetido
	for(i=1;i<=N;i++)
	//i aumenta até atingir o número informado
	{
		for(num=1;num<=i;num++)
		//O número é repetido até chegar nele mesmo
		{
			if(num==1)
			{
				printf("\n%d ", i);	
			}
			else
			{
				printf("%d ", i);
			}
			
		}
	}
	return 0;
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um número: \n");
	int N;
	scanf("%d", &N);
	prog(N);
	return 0;
}
