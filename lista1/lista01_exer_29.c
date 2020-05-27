/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

29) Dados um valor inteiro n e dois números inteiros positivos, i e j, diferentes de 0 (zero), imprimir em
ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
Exemplo: Para n = 6, i = 2 e j = 3 a saída deverá ser: 0,2,3,4,6,8.
*/

#include <stdio.h>
#include <locale.h>

int main() 
{
	setlocale(LC_ALL,"Portuguese");
	
	int n, i, j, mult, CONT;
	//Número de números a serem impressos, Primeiro multiplicando, Segundo multiplicando, Váriavel para verificar se é múltiplo, Controlador de quantos múltiplos são impressos

	printf("\nDigite o número de primeiros números naturais que são múltiplos de i, j ou ambos: \n");
	scanf("%d", &n);
	printf("Digite o valor de i:\n");
	scanf("%d", &i);
	printf("Digite o valor de j:\n");
	scanf("%d", &j);

	printf("Primeiros números naturais múltiplos de i, de j, ou de ambos:\n");
	while (CONT <= n)
	{
		if (mult%i == 0 || mult%j == 0)
		//Se mult for múltiplo de i ou j
		{
			printf(" %d\n", mult);
			CONT++;
		}
			mult++;
	}
	
	return 0;
}
