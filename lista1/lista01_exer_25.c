/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

25) Fa�a um Programa que leia 4 notas escolares de 15 alunos. Para cada um dos alunos calcular e
apresentar a m�dia.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int aluno, contNota;
	//Vari�vel que controla o aluno, Vari�vel que controla a nota
	float nota, acumNota, media;
	//V�riavel que recebe a nota, Vari�vel que acumula o valor das notas, Vari�vel que calcula a m�dia
	
	printf("Digite 4 notas escolares de 15 alunos.\n");
	for(aluno=1;aluno<=15;aluno++)
	{
		acumNota=0;
		for(contNota=1;contNota<=4;contNota++)
		{
			scanf("%f", &nota);
			acumNota=acumNota+nota;
		}
		media=acumNota/4;
		printf("Aluno %d, m�dia: %f\n", aluno, media);
	}
	
	return 0;
}
