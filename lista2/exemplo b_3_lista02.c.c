/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

3. Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira e
imprimir o novo saldo após o reajuste. O cálculo deve ser feito por uma função.
*/

#include <stdio.h>
#include <locale.h>

float REAJUSTE(float saldo,float porc)
{
	float resultado;
	//Variável que recebe o resultado do ajuste
	resultado=saldo+(saldo*(porc/100));
	return(resultado);
}

int main()
{
	printf("Insira o saldo:\nR$");
	float saldo, porc;
	//Variáveis que recebem o saldo e a porcentagem
	scanf("%f", &saldo);
	printf("Insira a porcentagem de reajuste:\n%%");
	scanf("%f", &porc);
	float resultado;
	printf("Novo saldo:\nR$%.2f", REAJUSTE(saldo, porc));
	return 0;
}
