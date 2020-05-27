/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

27) Faça um programa para calcular as seguintes sequencias:
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
	//Variável que controla os números da sequência, Soma dos números da sequência(acumulador), Variável que recebe o último número da sequência
	
	printf("Digite a quantidade de números da sequência: \n");
	scanf("%d", &n);
	for(CONT=1;CONT<=n;CONT++)
	{
		printf("%d\n", CONT);
		SOMA=SOMA+CONT;
	}
	printf("Soma de todos os números da sequência: %d\n\n", SOMA);
	
	printf("Digite a quantidade de números da sequência:\n");
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
	printf("Soma de todos os números da sequência: %d\n\n", SOMA);
	
	printf("Digite a quantidade de números da sequência:\n");
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
	printf("Soma de todos os números da sequência: %d\n\n", SOMA);
	return 0;
}
