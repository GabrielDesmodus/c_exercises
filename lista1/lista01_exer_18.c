/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

18) Ler do teclado o Peso e a altura de uma pessoa. Calcular o índice de massa corporal (IMC) e
determinar o tipo, conforme tabela abaixo. Exibir o IMC e o tipo da pessoa.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float altura, peso, imc;
	//Valor da altura, Valor do peso, Valor do IMC
	
	printf("Digite a sua altura em metros:\n");
	scanf("%f", &altura);
	printf("Digite o seu peso em kg:\n");
	scanf("%f", &peso);
	
	imc=peso/pow(altura,2);
	//IMC é igual ao peso dividido pela altura ao quadrado
	
	if(imc<22)
	{
		printf("IMC: %f. Tipo: Subpeso", imc);
	}
	else if(imc>=22 && imc<=25)
	{
		printf("IMC: %f. Tipo: Normal", imc);
	}
	else if(imc>25 && imc<=30)
	{
		printf("IMC: %f. Tipo: Sobrepeso", imc);
	}
	else if(imc>30 && imc<=40)
	{
		printf("IMC: %f. Tipo: Obeso", imc);
	}
	else if(imc>40)
	{
		printf("IMC: %f. Tipo: Obeso Mórbido", imc);
	}
		
	return 0;
}
