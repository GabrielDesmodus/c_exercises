/*
Gabriel Santos S�
3005461
Turma B

Lista 2

3. Fa�a um programa que leia o saldo e o % de reajuste de uma aplica��o financeira e
imprimir o novo saldo ap�s o reajuste. O c�lculo deve ser feito por uma fun��o.
*/

#include <stdio.h>
#include <locale.h>

float REAJUSTE(float saldo,float porc)
{
	float resultado;
	//Vari�vel que recebe o resultado do ajuste
	resultado=saldo+(saldo*(porc/100));
	return(resultado);
}

int main()
{
	printf("Insira o saldo:\nR$");
	float saldo, porc;
	//Vari�veis que recebem o saldo e a porcentagem
	scanf("%f", &saldo);
	printf("Insira a porcentagem de reajuste:\n%%");
	scanf("%f", &porc);
	float resultado;
	printf("Novo saldo:\nR$%.2f", REAJUSTE(saldo, porc));
	return 0;
}
