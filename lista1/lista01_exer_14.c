/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

14) Escreva um programa que receba tr�s n�meros inteiros e retorne uma destas tr�s mensagens:
� Os tr�s valores s�o iguais;
� N�o h� valores iguais; ou
� H� dois valores iguais e um diferente.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int A, B, C;
	//Primeiro, segundo e terceiro n�mero
	
	printf("Digite o primeiro n�mero:\n");
	scanf("%d", &A);
	printf("Digite o segundo n�mero:\n");
	scanf("%d", &B);
	printf("Digite o terceiro n�mero:\n");
	scanf("%d", &C);
	
		if(A==B && B==C)
		//Verifica se todos os valores s�o iguais
		{
			printf("Os tr�s valores s�o iguais.");
		}
		
		else if(A==B && B!=C)
		{
			printf("H� dois valores iguais e um diferente.");	
		}
		
		else if(A==B && C!=A)
		{
			printf("H� dois valores iguais e um diferente.");
		}
		
		else if(B==C && A!=B)
		{
			printf("H� dois valores iguais e um diferente.");
		}
		
		else if(B==C && A!=C)
		{
			printf("H� dois valores iguais e um diferente.");
		}
		
		else if(A==C && C!=B)
		{
			printf("H� dois valores iguais e um diferente.");
		}
		
		else if(A==C && B!=A)
		//Verifica se h� dois valores iguais e um diferente
		{
			printf("H� dois valores iguais e um diferente.");
		}
		
		else if(A!=B && B!= C && C!=A)
		//Verifica se n�o h� valores iguais
		{
			printf("N�o h� valores iguais.");
		}	
	
	return 0;
}
