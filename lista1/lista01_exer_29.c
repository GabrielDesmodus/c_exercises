/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

29) Dados um valor inteiro n e dois n�meros inteiros positivos, i e j, diferentes de 0 (zero), imprimir em
ordem crescente os n primeiros naturais que s�o m�ltiplos de i ou de j e ou de ambos.
Exemplo: Para n = 6, i = 2 e j = 3 a sa�da dever� ser: 0,2,3,4,6,8.
*/

#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL,"Portuguese");
	
	int n, i, j, mult, CONT;
	//N�mero de n�meros a serem impressos, Primeiro multiplicando, Segundo multiplicando, V�riavel para verificar se � m�ltiplo, Controlador de quantos m�ltiplos s�o impressos

	printf("\nDigite o n�mero de primeiros n�meros naturais que s�o m�ltiplos de i, j ou ambos: \n");
	scanf("%d", &n);
	printf("Digite o valor de i:\n");
	scanf("%d", &i);
	printf("Digite o valor de j:\n");
	scanf("%d", &j);

	printf("Primeiros n�meros naturais m�ltiplos de i, de j, ou de ambos:\n");
	while (CONT <= n)
	{
		if (mult%i == 0 || mult%j == 0)
		//Se mult for m�ltiplo de i ou j
		{
			printf(" %d\n", mult);
			CONT++;
		}
			mult++;
	}
	
	return 0;
}
