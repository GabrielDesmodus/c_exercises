/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

22) A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes. Fa�a um programa
para coletar dados sobre o sal�rio e n�mero de filhos de cada habitante e ap�s as leituras, escrever:
a) M�dia de sal�rio da popula��o
b) M�dia do n�mero de filhos
c) Maior sal�rio dos habitantes
d) Percentual de pessoas com sal�rio menor que R$ 150,00
Obs.: O final da leitura dos dados se dar� com a entrada de um sal�rio igual a zero.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float num,numFilhos, acumuladorFilhos, salario, salarioMenor150, maiorSalario, acumuladorSalario, mediaSalario, mediaFilhos, percentual;
	//N�mero de habitantes registrados, Vari�vel que acumula o total de filhos, Sal�rio, Quantidade de sal�rios menores que 150, Maior sal�rio,
	//Acumulador de sal�rio, M�dia dos sal�rios, M�dia de filhos, Percentual de sal�rios menores que 150
	
	salario=100;
	while(salario!=0)
	{
		printf("Digite o sal�rio do habitante (digite 0 para terminar a leitura):\nR$");
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
		printf("Digite o n�mero de filhos do habitante\n");
		scanf("%f", &numFilhos);
		acumuladorFilhos=acumuladorFilhos+numFilhos;
		num++;
	}
	
	mediaSalario=acumuladorSalario/num;
	mediaFilhos=acumuladorFilhos/num;
	percentual=(salarioMenor150/num)*100;
	
	printf("A m�dia de sal�rio da popula��o � de R$%.2f\nA m�dia do n�mero de filhos � de %f\nO maior sal�rio dos habitantes � de R$%.2f\nO percentual de pessoas com sal�rio menor que R$150,00 � de %f%%", mediaSalario, mediaFilhos, maiorSalario, percentual);
	
	return 0;
}
