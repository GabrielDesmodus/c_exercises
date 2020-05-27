/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

7. Escreva um programa que leia uma string (use gets()) e retire todos os caracteres 'c'
da string lida. Informe na tela quantos caracteres foram retirados
*/

#include<stdio.h>
#include<locale.h>

int main()
{
	char string[20];
	int i, qnt=0;
	//Variável de controle e quantidade de vezes que c apareceu
	
	gets(string);
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]=='c')
		{
			qnt++;
			//Se o caractere for igual a c, a quantidade aumenta
		}
	}
	printf("%d", qnt);
	return 0;
}
