/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

8) Fa�a um programa que leia um n�mero inteiro positivo n e calcule a soma dos n primeiros n�meros
naturais.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	float N, SOMA=0;
	//N�mero digitado pelo usu�rio, V�riavel que acumula o valor de CONT
	int CONT=1;
	//Vari�vel que acumula +1 a cada vez que se repete a esturutura
	
	printf("Digite um n�mero inteiro positivo:\n");
	scanf("%f", &N);
	if(N>=0)
	{
		while(CONT <= N)
		{
			SOMA=SOMA+CONT;
			CONT++;
		}
		printf("A soma dos primeiros %f n�meros naturais �: %f", N, SOMA);
	}
	else
	{
		printf("N�o � um n�mero inteiro positivo");
	}
	
	
	
	return 0;
}
