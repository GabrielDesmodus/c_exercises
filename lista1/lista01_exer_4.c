/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

4) Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e
mostre o valor do aumento e o novo salário.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float salario, percentual, aumento, novosalario;
	// Salário, percentual de aumento, aumento, valor do novo salário
	printf("Digite o salário do funcionário: \n");
	scanf("%f", &salario);
	printf("Digite o percentual de aumento do funcionário: \n");
	scanf("%f", &percentual);
	aumento = salario / percentual;
	// Ao aumento é atribuído a porcentagem do salário digitada
	novosalario = salario+aumento;
	printf("O valor do aumento foi de: %2.0f\n", aumento);
	printf("O valor do novo salário é de: %2.0f\n", novosalario);
	return 0;
}
