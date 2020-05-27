/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

17) Escreva um programa para receber pelo teclado 4 valores inteiros positivos (A, B, C e D).
Determinar qual o maior e o menor valor e imprimi-lo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int A, B, C, D, numMaior, numMenor;
	//Os 4 valores inteiros positivos, Variável que acumula os maiores números, Variável que acumula os menores números
	
	printf("Digite 4 valores inteiros positivos:\n");
	printf("Digite o valor de A:\n");
	scanf("%d", &A);
	numMaior=A;
	numMenor=A;
	printf("Digite o valor de B:\n");
	scanf("%d", &B);
	if(B>numMaior)
	{
		numMaior=B;	
	}	
	if(B<numMenor)
	{
		numMenor=B;
	}
	printf("Digite o valor de C:\n");
	scanf("%d", &C);
	if(C>numMaior)
	{
		numMaior=C;
	}
	if(C<numMenor)
	{
		numMenor=C;
	}
	printf("Digite o valor de D:\n");
	scanf("%d", &D);	
	if(D>numMaior)
	{
		numMaior=D;
	}
	if(D<numMenor)
	{
		numMenor=D;
	}
	
	if(A<0 || B<0 || C<0 || D<0)
	//Para evitar que o programa prossiga caso haja um input de um número não positivo
	{
		printf("São permitidos apenas números inteiros positivos");
		return 0;
	}
	printf("O maior valor é %d, o menor valor é %d", numMaior, numMenor);
	
	return 0;
}
