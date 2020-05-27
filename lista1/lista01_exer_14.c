/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

14) Escreva um programa que receba três números inteiros e retorne uma destas três mensagens:
– Os três valores são iguais;
– Não há valores iguais; ou
– Há dois valores iguais e um diferente.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C;
	//Primeiro, segundo e terceiro número
	
	printf("Digite o primeiro número:\n");
	scanf("%d", &A);
	printf("Digite o segundo número:\n");
	scanf("%d", &B);
	printf("Digite o terceiro número:\n");
	scanf("%d", &C);
	
		if(A==B && B==C)
		//Verifica se todos os valores são iguais
		{
			printf("Os três valores são iguais.");
		}
		
		else if(A==B && B!=C)
		{
			printf("Há dois valores iguais e um diferente.");	
		}
		
		else if(A==B && C!=A)
		{
			printf("Há dois valores iguais e um diferente.");
		}
		
		else if(B==C && A!=B)
		{
			printf("Há dois valores iguais e um diferente.");
		}
		
		else if(B==C && A!=C)
		{
			printf("Há dois valores iguais e um diferente.");
		}
		
		else if(A==C && C!=B)
		{
			printf("Há dois valores iguais e um diferente.");
		}
		
		else if(A==C && B!=A)
		//Verifica se há dois valores iguais e um diferente
		{
			printf("Há dois valores iguais e um diferente.");
		}
		
		else if(A!=B && B!= C && C!=A)
		//Verifica se não há valores iguais
		{
			printf("Não há valores iguais.");
		}	
	
	return 0;
}
