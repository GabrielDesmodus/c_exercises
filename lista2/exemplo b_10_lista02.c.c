/*
Gabriel Santos S�
3005461
Turma B

Lista 2

10.Fa�a um programa que recebe uma string como entrada e mostra outra string com os
carateres embaralhados. Por exemplo: se o programa receber a palavra python, pode
retornar npthyo, ophtyn ou qualquer outra combina��o poss�vel, de forma aleat�ria.
Exiba todos os caracteres em caixa alta, independentemente de como foram digitados.
*/ 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	char string[20],gnirts[20];
	//Vetores que recebem uma string e a string embaralhada
	int i,j;
	//Vari�veis de controle
	gets(string);
	
	for(i=0;i<strlen(string);i++)
	{
		gnirts[rand()%strlen(string)]=string[i];
	}
	
	for(i=0;i<strlen(string);i++)
	{
		gnirts[i] = toupper(gnirts[i]);
	}
	printf("Palavra embaralhada: %s\n", gnirts);
	return 0;
}

