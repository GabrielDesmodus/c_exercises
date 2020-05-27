/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

27) Fa�a um programa para calcular as seguintes sequencias:
1 + 2 + 3 + 4 + 5 + ::: + n
1 - 2 + 3 - 4 + 5 + ::: + (2n - 1)
1 + 3 + 5 + 7 + ::: + (2n - 1)
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int CONT, SOMA,n;
	//Vari�vel que controla os n�meros da sequ�ncia, Soma dos n�meros da sequ�ncia(acumulador), Vari�vel que recebe o �ltimo n�mero da sequ�ncia
	
	printf("Digite a quantidade de n�meros da sequ�ncia: \n");
	scanf("%d", &n);
	for(CONT=1;CONT<=n;CONT++)
	{
		printf("%d\n", CONT);
		SOMA=SOMA+CONT;
	}
	printf("Soma de todos os n�meros da sequ�ncia: %d\n\n", SOMA);
	
	printf("Digite a quantidade de n�meros da sequ�ncia:\n");
	scanf("%d", &n);
	n=(2*n)-1;
	SOMA=0;
	//Reseta o valor do acumulador
	for(CONT=1;CONT<=n;CONT++)
	{
		printf("%d\n", CONT);
		if (CONT % 2 != 0)
		{
			SOMA=SOMA+CONT;
		}
		else
		{
			SOMA=SOMA-CONT;
		}
	}
	printf("Soma de todos os n�meros da sequ�ncia: %d\n\n", SOMA);
	
	printf("Digite a quantidade de n�meros da sequ�ncia:\n");
	scanf("%d", &n);
	n=(2*n)-1;
	SOMA=0;
	//Reseta o valor do acumulador
	for(CONT=1;CONT<=n;CONT++)
	{
		printf("%d\n", CONT);
		SOMA=SOMA+CONT;
		CONT=CONT+1;
	}
	printf("Soma de todos os n�meros da sequ�ncia: %d\n\n", SOMA);
	return 0;
}
