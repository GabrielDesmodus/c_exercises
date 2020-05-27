/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

11) Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem
decrescente.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float A,B,C;
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	if(A>=B && B>=C)
	{
		printf("%f, %f, %f", A,B,C);
	}
	else if(A>=C && C>=B)
	{
		printf("%f, %f, %f", A,C,B);
	}
	else if(B>=A && A>=C)
	{
		printf("%f, %f, %f", B,A,C);
	}
	else if(B>=C && C>=A)
	{
		printf("%f, %f, %f", B,C,A);
	}
	else if(C>=B && B>=A)
	{
		printf("%f, %f, %f", C,B,A);
	}
	else
	{
		printf("%f, %f, %f", C,A,B);
	}
	return 0;
}
