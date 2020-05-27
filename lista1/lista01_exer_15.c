/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

15) Um posto est� vendendo combust�vel com a seguinte tabela de descontos:
�lcool At� 20 litros, desconto de 3% por litro
Acima de 20 litros, desconto de 5% por litro
Gasolina At� 20 litros, desconto de 4% por litro
Acima de 20 litros, desconto de 6% por litro
Escreva um programa que leia o n�mero de litros vendidos e o tipo de combust�vel (codificado da seguinte
forma: A-�lcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o pre�o do
litro da gasolina � R$ 3,30 e o pre�o do litro do �lcool � R$ 2,90.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char tipo;
	//tipo de combust�vel
	float litro, valor;
	//n�mero de litros, valor a ser pago
	
	printf("Digite o tipo de combust�vel que ser� comprado, A-�lcool, G-Gasolina:\n");
	scanf("%c", &tipo);
	printf("Digite a quantidade de litros que ser� comprada:\n");
	if(tipo=='A')
	{
		scanf("%f", &litro);
		if(litro<=20)
		{
			valor = litro-(litro*0.087);
			//valor � igual ao n�mero de litros menos o desconto(n�mero de litros multiplicado pela porcentagem de desconto por litro)
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
	printf("O valor que ser� pago ser� de R$:%.2f", valor);
	
	return 0;
}
