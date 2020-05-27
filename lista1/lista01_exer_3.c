/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

3) Considerando uma elei��o de apenas 2 candidatos, elabore um programa que leia do
teclado o n�mero total de eleitores, e o n�mero de votos do primeiro candidato e o
n�mero de votos do segundo candidato. Em seguida, o programa dever� apresentar o
percentual de votos de cada um dos candidatos e o percentual de votos nulos.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int totaleleitores, votocand1, votocand2, votos, nulos;
	//Total de eleitores, n�mero de votos do primeiro candidato, n�mero de votos do segundo candidato, total de votos, total de votos nulos
	float porNulos, porCand1, porCand2;
	//Porcentagem de votos nulos, porcentagem de votos do primeiro candidato, percentual de votos do segundo candidato
	
	printf("Digite o n�mero total de eleitores:\n");
	scanf("%d", &totaleleitores);
	printf("Digite o n�mero de votos do primeiro candidato:\n");
	scanf("&d", &votocand1);
	printf("Digite o n�mero de votos do segundo candidato:\n");
	scanf("&d", &votocand2);
	
	votos = votocand1 + votocand2;
	nulos = totaleleitores - votos;
	porNulos = (nulos / totaleleitores) * 100;
	porCand1 = (votocand1 / votos) * 100;
	porCand2 = (votocand2 / votos) * 100;
	printf("O percentual de votos do primeiro candidato � de %f%%\n", porCand1);
	printf("O percentual de votos do segundo candidato � de %f%%\n", porCand2);
	printf("O percentual de votos nulos � de %f%%\n", porNulos);
	
	return 0;
}
