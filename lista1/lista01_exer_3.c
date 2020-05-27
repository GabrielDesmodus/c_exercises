/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

3) Considerando uma eleição de apenas 2 candidatos, elabore um programa que leia do
teclado o número total de eleitores, e o número de votos do primeiro candidato e o
número de votos do segundo candidato. Em seguida, o programa deverá apresentar o
percentual de votos de cada um dos candidatos e o percentual de votos nulos.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int totaleleitores, votocand1, votocand2, votos, nulos;
	//Total de eleitores, número de votos do primeiro candidato, número de votos do segundo candidato, total de votos, total de votos nulos
	float porNulos, porCand1, porCand2;
	//Porcentagem de votos nulos, porcentagem de votos do primeiro candidato, percentual de votos do segundo candidato
	
	printf("Digite o número total de eleitores:\n");
	scanf("%d", &totaleleitores);
	printf("Digite o número de votos do primeiro candidato:\n");
	scanf("&d", &votocand1);
	printf("Digite o número de votos do segundo candidato:\n");
	scanf("&d", &votocand2);
	
	votos = votocand1 + votocand2;
	nulos = totaleleitores - votos;
	porNulos = (nulos / totaleleitores) * 100;
	porCand1 = (votocand1 / votos) * 100;
	porCand2 = (votocand2 / votos) * 100;
	printf("O percentual de votos do primeiro candidato é de %f%%\n", porCand1);
	printf("O percentual de votos do segundo candidato é de %f%%\n", porCand2);
	printf("O percentual de votos nulos é de %f%%\n", porNulos);
	
	return 0;
}
