/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

16)Desenvolver um programa que receba do teclado o nome e as 3 notas de um aluno. Calcular a média
aritmética do aluno exibir. Atribuir o resultado de acordo com a tabela abaixo.
Média Resultado
0 a 2,9 Reprovado
3 a 5,9 Recuperação
6 a 10,0 Aprovado*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int CONT;
	//Variável de controle para a estrutura de repetição
	float NOTA1,NOTA2,NOTA3,MEDIA;
	//Primeira nota, segunda nota, terceira nota e média
	char NOME[25];
	//Nome do aluno
	
	for(CONT=1;CONT<=3;CONT++)
	{
		printf("Digite o nome do aluno:\n");
		scanf("%s", NOME);
		printf("Digite a primeira nota:\n");
		scanf("%f", &NOTA1);
		printf("Digite a segunda nota:\n");
		scanf("%f", &NOTA2);
		printf("Digite a terceira nota:\n");
		scanf("%f", &NOTA3);
		MEDIA=(NOTA1+NOTA2+NOTA3)/3;
		if (MEDIA>=0 && MEDIA<=10)
		{
			if(MEDIA<=2.9)
			{
				printf("%s você foi reprovado\n", NOME);
			}
			else if(MEDIA <=5.9)
			{
				printf("Você está de recuperação\n");
			}
			else
			{
				printf("Você foi aprovado\n");
			}
		}

	}
	
	return 0;
}
