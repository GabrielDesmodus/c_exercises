/*
Gabriel Santos S�
3005461
Turma B

Lista 2

5.Fa�a um programa com uma fun��o chamada somaImposto. A fun��o possui dois
par�metros formais: taxaImposto, que � a quantia de imposto sobre vendas expressa
em porcentagem e custo, que � o custo de um item antes do imposto. A fun��o
�altera� o valor de custo para incluir o imposto sobre vendas.
*/

#include<stdio.h>
#include<locale.h>

float somaImposto(float taxaImposto, float custo)
//Fun��o que realiza a soma do custo com o imposto
{
	float resultado;
	//Vari�vel que armazena o resultado da jun��o do custo e taxa de imposto
	resultado=custo+taxaImposto;
	return(resultado);
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float taxaImposto, custo;
	printf("Digite o custo: \nR$");
	scanf("%f", &custo);
	printf("Digite a taxa de imposto: \nR$");
	scanf("%f", &taxaImposto);
	printf("O custo final � de R$%.2f", somaImposto(taxaImposto, custo));
	return 0;
}

