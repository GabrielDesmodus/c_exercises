/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

2. Uma função que receba um carácter e caso seja maiúsculo retorne o correspondente
minúsculo. O protótipo da função deverá ser char MINUSCULO(char S). Faça um
programa que teste a função em seu código.
*/

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

char MINUSCULO(char S)
{
	char MAIUSCULO;
	//Variável que recebe o caractere em minúsculo
	int i;
	//Variável de controle
	if(islower(S)==0)
	{
		MAIUSCULO=tolower(S);
	}
	return (MAIUSCULO);
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um caractere maiúsculo: \n");
	char S, MAIUSCULO;
	scanf("%c", &S);
	MAIUSCULO=MINUSCULO(S);
	printf("Caractere em minúsculo: \n%c", MAIUSCULO);
	return 0;
}

