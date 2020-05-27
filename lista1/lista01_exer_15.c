/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

15) Um posto está vendendo combustível com a seguinte tabela de descontos:
Álcool Até 20 litros, desconto de 3% por litro
Acima de 20 litros, desconto de 5% por litro
Gasolina Até 20 litros, desconto de 4% por litro
Acima de 20 litros, desconto de 6% por litro
Escreva um programa que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte
forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do
litro da gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char tipo;
	//tipo de combustível
	float litro, valor;
	//número de litros, valor a ser pago
	
	printf("Digite o tipo de combustível que será comprado, A-álcool, G-Gasolina:\n");
	scanf("%c", &tipo);
	printf("Digite a quantidade de litros que será comprada:\n");
	if(tipo=='A')
	{
		scanf("%f", &litro);
		if(litro<=20)
		{
			valor = litro-(litro*0.087);
			//valor é igual ao número de litros menos o desconto(número de litros multiplicado pela porcentagem de desconto por litro)
		}
		
		else if(litro>20)
		{
			valor = litro-(litro*0.145);
		}
	}
	
	if(tipo=='G')
	{
		scanf("%f", &litro);
		if(litro<=20)
		{
			valor = litro-(litro*0.099);
		}
		if(litro>20)
		{
			valor = litro-(litro*0.165);
		}
	}
	printf("O valor que será pago será de R$:%.2f", valor);
	
	return 0;
}
