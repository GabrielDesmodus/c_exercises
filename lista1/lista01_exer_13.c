/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

13) Classificar um tri�ngulo quanto aos lados, sendo que um tri�ngulo com todos lados iguais �
designado equil�tero, com todos os lados diferentes entre si � designado escaleno e caso tenha apenas
dois lados iguais entre si, designa-se is�sceles. Antes � importante verificar se os valores formam um
tri�ngulo, sen�o mostrar a mensagem �N�o � tri�ngulo�.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float A, B, C;
	//Valor do primeiro lado, do segundo lado, do terceiro lado
	
	printf("Digite o valor do primeiro lado do tri�ngulo:\n");
	scanf("%f", &A);
	printf("Digite o valor do segundo lado do tri�ngulo:\n");
	scanf("%f", &B);
	printf("Digite o valor do terceiro lado do tri�ngulo:\n");
	scanf("%f", &C);
	
	if (A<=0 || B<=0 || C<=0)
	//verifica se os valores s�o maiores que zero, para poderem formar um tri�ngulo
	{
		if(A==B && B==C)
		{
			printf("O tri�ngulo � equil�tero");
		}
		
		else if(A==B && B!=C)
		{
			printf("O tri�ngulo � is�celes");	
		}
		
		else if(A==B && C!=A)
		{
			printf("O tri�ngulo � is�celes");
		}
		
		else if(B==C && A!=B)
		{
			printf("O tri�ngulo � is�celes");
		}
		
		else if(B==C && A!=C)
		{
			printf("O tri�ngulo � is�celes");
		}
		
		else if(A==C && C!=B)
		{
			printf("O tri�ngulo � is�celes");
		}
		
		else if(A==C && B!=A)
		{
			printf("O tri�ngulo � is�celes");
		}
		
		else if(A!=B && B!= C && C!=A)
		{
			printf("O tri�ngulo � escaleno");
		}	
	}
	
	else
	{
		printf("N�o � um tri�ngulo");
	}
	
	return 0;
}
