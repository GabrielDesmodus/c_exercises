/*
Gabriel Santos S�
3005461
Turma B

Lista 2

8. Fa�a um programa que inverta uma cadeia de caracteres. O programa deve ler a
cadeia com gets e armazen�-la invertida em outra cadeia. Use o comando for para
varrer a cadeia at� o seu final.
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char string[20], gnirts[20];
	//Vari�vel que recebe a cadeia e a cadeia invertida
	int i, j;
	//Vari�veis de controle
	
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
