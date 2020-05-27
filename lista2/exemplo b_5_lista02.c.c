/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

5.Faça um programa com uma função chamada somaImposto. A função possui dois
parâmetros formais: taxaImposto, que é a quantia de imposto sobre vendas expressa
em porcentagem e custo, que é o custo de um item antes do imposto. A função
“altera” o valor de custo para incluir o imposto sobre vendas.
*/

#include<stdio.h>
#include<locale.h>

float somaImposto(float taxaImposto, float custo)
//Função que realiza a soma do custo com o imposto
{
	float resultado;
	//Variável que armazena o resultado da junção do custo e taxa de imposto
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
	printf("O custo final é de R$%.2f", somaImposto(taxaImposto, custo));
	return 0;
}

