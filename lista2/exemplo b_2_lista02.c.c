/*
Gabriel Santos S�
3005461
Turma B

Lista 2

2. Uma fun��o que receba um car�cter e caso seja mai�sculo retorne o correspondente
min�sculo. O prot�tipo da fun��o dever� ser char MINUSCULO(char S). Fa�a um
programa que teste a fun��o em seu c�digo.
*/

#include <stdio.h>
#include <ctype.h>
#include <locale.h>

char MINUSCULO(char S)
{
	char MAIUSCULO;
	//Vari�vel que recebe o caractere em min�sculo
	int i;
	//Vari�vel de controle
	if(islower(S)==0)
	{
		MAIUSCULO=tolower(S);
	}
	return (MAIUSCULO);
}

int main()
{
	setlocale(LC_ALL,"Portuguese");
	printf("Digite um caractere mai�sculo: \n");
	char S, MAIUSCULO;
	scanf("%c", &S);
	MAIUSCULO=MINUSCULO(S);
	printf("Caractere em min�sculo: \n%c", MAIUSCULO);
	return 0;
}

