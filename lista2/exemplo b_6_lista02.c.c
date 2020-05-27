/*
Gabriel Santos S�
3005461
Turma B

Lista 2

6. Fa�a um programa para imprimir:
 1
 2 2
 3 3 3
 .....
 n n n n n n ... n
Para um n informado pelo usu�rio. Use uma fun��o que receba um valor n inteiro e imprima at� a n-�sima
linha.
*/

#include <stdio.h>
#include <locale.h>

void prog(int N)
{
	int i, num;
	//Vari�vel de controle e v�riavel que recebe o n�mero de vezes que o n�mero ser� repetido
	for(i=1;i<=N;i++)
	//i aumenta at� atingir o n�mero informado
	{
		for(num=1;num<=i;num++)
		//O n�mero � repetido at� chegar nele mesmo
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
	printf("Digite um n�mero: \n");
	int N;
	scanf("%d", &N);
	prog(N);
	return 0;
}
