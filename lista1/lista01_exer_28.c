/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

28) Fa�a um programa que simula o lan�amento de dois dados, D1 e D2, n vezes, e tem como sa�da o
n�mero de cada dado e a rela��o entre eles (>,<,=) em cada lan�amento.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int D1, D2, CONT, n;
	
	scanf("%d", &n);
	for(CONT=1;CONT<=n;CONT++)
	{
		D1=1+(rand()%6);
		D2=1+(rand()%6);
		
		printf("Dado D1: %d\n", D1);
		printf("Dado D2: %d\n", D2);
		if(D1>D2)
		{
			printf("O dado D1 � maior que o D2\n\n");
		}
		else if(D2>D1)
		{
			printf("O dado D2 � maior que o D1\n\n");
		}
		else if(D2==D1)
		{
			printf("O dado D2 � igual ao D1\n\n");
		}
	}
	
	return 0;
}
