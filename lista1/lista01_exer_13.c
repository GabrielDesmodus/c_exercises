/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

13) Classificar um triângulo quanto aos lados, sendo que um triângulo com todos lados iguais é
designado equilátero, com todos os lados diferentes entre si é designado escaleno e caso tenha apenas
dois lados iguais entre si, designa-se isósceles. Antes é importante verificar se os valores formam um
triângulo, senão mostrar a mensagem “Não é triângulo”.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float A, B, C;
	//Valor do primeiro lado, do segundo lado, do terceiro lado
	
	printf("Digite o valor do primeiro lado do triângulo:\n");
	scanf("%f", &A);
	printf("Digite o valor do segundo lado do triângulo:\n");
	scanf("%f", &B);
	printf("Digite o valor do terceiro lado do triângulo:\n");
	scanf("%f", &C);
	
	if (A<=0 || B<=0 || C<=0)
	//verifica se os valores são maiores que zero, para poderem formar um triângulo
	{
		if(A==B && B==C)
		{
			printf("O triângulo é equilátero");
		}
		
		else if(A==B && B!=C)
		{
			printf("O triângulo é isóceles");	
		}
		
		else if(A==B && C!=A)
		{
			printf("O triângulo é isóceles");
		}
		
		else if(B==C && A!=B)
		{
			printf("O triângulo é isóceles");
		}
		
		else if(B==C && A!=C)
		{
			printf("O triângulo é isóceles");
		}
		
		else if(A==C && C!=B)
		{
			printf("O triângulo é isóceles");
		}
		
		else if(A==C && B!=A)
		{
			printf("O triângulo é isóceles");
		}
		
		else if(A!=B && B!= C && C!=A)
		{
			printf("O triângulo é escaleno");
		}	
	}
	
	else
	{
		printf("Não é um triângulo");
	}
	
	return 0;
}
