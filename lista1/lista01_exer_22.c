/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

22) A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes. Faça um programa
para coletar dados sobre o salário e número de filhos de cada habitante e após as leituras, escrever:
a) Média de salário da população
b) Média do número de filhos
c) Maior salário dos habitantes
d) Percentual de pessoas com salário menor que R$ 150,00
Obs.: O final da leitura dos dados se dará com a entrada de um salário igual a zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float num,numFilhos, acumuladorFilhos, salario, salarioMenor150, maiorSalario, acumuladorSalario, mediaSalario, mediaFilhos, percentual;
	//Número de habitantes registrados, Variável que acumula o total de filhos, Salário, Quantidade de salários menores que 150, Maior salário,
	//Acumulador de salário, Média dos salários, Média de filhos, Percentual de salários menores que 150
	
	salario=100;
	while(salario!=0)
	{
		printf("Digite o salário do habitante (digite 0 para terminar a leitura):\nR$");
		scanf("%f", &salario);
		if(salario<150)
		{
			salarioMenor150++;
		}
		if(num==0)
		{
			maiorSalario=salario;
		}
		else if(salario>maiorSalario)
		{
			maiorSalario=salario;
		}
		acumuladorSalario=acumuladorSalario+salario;
		printf("Digite o número de filhos do habitante\n");
		scanf("%f", &numFilhos);
		acumuladorFilhos=acumuladorFilhos+numFilhos;
		num++;
	}
	
	mediaSalario=acumuladorSalario/num;
	mediaFilhos=acumuladorFilhos/num;
	percentual=(salarioMenor150/num)*100;
	
	printf("A média de salário da população é de R$%.2f\nA média do número de filhos é de %f\nO maior salário dos habitantes é de R$%.2f\nO percentual de pessoas com salário menor que R$150,00 é de %f%%", mediaSalario, mediaFilhos, maiorSalario, percentual);
	
	return 0;
}
