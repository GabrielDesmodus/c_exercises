/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

4) Fa�a um programa que receba o sal�rio de um funcion�rio e o percentual de aumento, calcule e
mostre o valor do aumento e o novo sal�rio.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, percentual, aumento, novosalario;
	// Sal�rio, percentual de aumento, aumento, valor do novo sal�rio
	printf("Digite o sal�rio do funcion�rio: \n");
	scanf("%f", &salario);
	printf("Digite o percentual de aumento do funcion�rio: \n");
	scanf("%f", &percentual);
	aumento = salario / percentual;
	// Ao aumento � atribu�do a porcentagem do sal�rio digitada
	novosalario = salario+aumento;
	printf("O valor do aumento foi de: %2.0f\n", aumento);
	printf("O valor do novo sal�rio � de: %2.0f\n", novosalario);
	return 0;
}
