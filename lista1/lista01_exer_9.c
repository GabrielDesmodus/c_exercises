/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

9) Faça um Programa que leia um código:1 – Sinal vermelho, 2 – Sinal amarelo e 3 - Sinal verde .
Baseado no código digitado avise ao pedestre que está esperando no sinal:“SIGA”, "ATENÇÃO" ou
“ESPERE”*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int CODIGO;
	//Codigo dado pelo usuário
	
	printf("Digite um código:\n1-Sinal vermelho\n2-Sinal amarelo\n3-Sinal verde\n\n");
	scanf("%d", &CODIGO);
	switch(CODIGO)
	{
		case 1 :

			printf("\nPedestre esperando o sinal, SIGA");
			break;
		
		case 2 :
			
			printf("\nPedestre esperando, ATENÇÃO");
			break;
			
		case 3 :
			
			printf("\nPedestre esperando o sinal, ESPERE");
			break;
			
		default :
			//Mensagem de erro caso o usuário não digite nenhum número listado
			printf("\nCódigo inválido");
			
	}
	
	return 0;
}
