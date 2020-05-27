/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

25) Faça um Programa que leia 4 notas escolares de 15 alunos. Para cada um dos alunos calcular e
apresentar a média.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int aluno, contNota;
	//Variável que controla o aluno, Variável que controla a nota
	float nota, acumNota, media;
	//Váriavel que recebe a nota, Variável que acumula o valor das notas, Variável que calcula a média
	
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
		printf("Aluno %d, média: %f\n", aluno, media);
	}
	
	return 0;
}
