/*
Gabriel Santos S�
3005461
Turma B

Lista 2

9. Escreva um programa que leia uma linha de caracteres do teclado e imprima quantas
vezes um caractere, tamb�m fornecido pelo teclado, aparece nesta linha. O programa
tamb�m deve imprimir em que posi��es o caractere foi encontrado.
*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	char string[20], carac, pos[20];
	int qnt, i, j;
	
	printf("Escreva uma linha de caracteres: \n");
	gets(string);
	printf("Escreva um caractere: \n");
	fflush(stdin);
	scanf("%c", &carac);
	printf("\nPosi��es que o caractere aparece dentro da linha: \n");
	for(i=0;i<=strlen(string)-1;i++)
	{
		if(string[i]==carac)
		{
			qnt++;
			printf("Posi��o: %d\n", i);	
		}	
	}	
	printf("N�mero de vezes que o caractere aparece: %d\n", qnt);
	
	return 0;
}
