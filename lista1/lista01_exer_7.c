/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

7) Fa�a um Programa que leia 4 notas escolares de 5 alunos. Para cada um dos alunos calcular e
apresentar a m�dia.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int ALUNO, NOTA;
	//Vari�vel que controla qual Aluno receber� a m�dia, vari�vel que controla qual nota est� sendo recebida
	float NOTAS = 0, SOMA = 0, MEDIA = 0;
	//V�riavel que recebe o valor das notas, vari�vel que recebe o valor da soma, vari�vel que recebe o valor da m�dia
	
	for(ALUNO=1;ALUNO<=5;ALUNO=ALUNO+1)
	{
		SOMA=0;
		for(NOTA=1;NOTA<=4;NOTA=NOTA+1)
		{
			printf("Digite a nota:\n");
			scanf("%f", &NOTAS);
			SOMA=SOMA+NOTAS;
		}
		MEDIA=SOMA/4;
		printf("A m�dia do aluno � de: %f\n", MEDIA);
	}
	return 0;
}
