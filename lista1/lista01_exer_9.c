/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

9) Fa�a um Programa que leia um c�digo:1 � Sinal vermelho, 2 � Sinal amarelo e 3 - Sinal verde .
Baseado no c�digo digitado avise ao pedestre que est� esperando no sinal:�SIGA�, "ATEN��O" ou
�ESPERE�*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int CODIGO;
	//Codigo dado pelo usu�rio
	
	printf("Digite um c�digo:\n1-Sinal vermelho\n2-Sinal amarelo\n3-Sinal verde\n\n");
	scanf("%d", &CODIGO);
	switch(CODIGO)
	{
		case 1 :

			printf("\nPedestre esperando o sinal, SIGA");
			break;
		
		case 2 :
			
			printf("\nPedestre esperando, ATEN��O");
			break;
			
		case 3 :
			
			printf("\nPedestre esperando o sinal, ESPERE");
			break;
			
		default :
			//Mensagem de erro caso o usu�rio n�o digite nenhum n�mero listado
			printf("\nC�digo inv�lido");
			
	}
	
	return 0;
}
