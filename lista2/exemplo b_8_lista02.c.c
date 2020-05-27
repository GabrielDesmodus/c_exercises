/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

8. Faça um programa que inverta uma cadeia de caracteres. O programa deve ler a
cadeia com gets e armazená-la invertida em outra cadeia. Use o comando for para
varrer a cadeia até o seu final.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char string[20], gnirts[20];
	//Variável que recebe a cadeia e a cadeia invertida
	int i, j;
	//Variáveis de controle
	
	fflush(stdin);
	printf("Digite uma string: \n");
	gets(string);

	for(i=strlen(string)-1;i>=0;i--)
	{
			gnirts[j]=string[i];
			j++;
	}
	printf("String invertida:\n %s", gnirts);
	return 0;
}
