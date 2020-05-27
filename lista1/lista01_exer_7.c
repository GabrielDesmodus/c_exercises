/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

7) Faça um Programa que leia 4 notas escolares de 5 alunos. Para cada um dos alunos calcular e
apresentar a média.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int ALUNO, NOTA;
	//Variável que controla qual Aluno receberá a média, variável que controla qual nota está sendo recebida
	float NOTAS = 0, SOMA = 0, MEDIA = 0;
	//Váriavel que recebe o valor das notas, variável que recebe o valor da soma, variável que recebe o valor da média
	
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
		printf("A média do aluno é de: %f\n", MEDIA);
	}
	return 0;
}
