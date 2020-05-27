/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

10) Faça um Programa que leia o salário bruto de uma pessoa e calcule o desconto do INSS levando em
consideração o seguinte:
• Para salários até R$ 500,00 a alíquota de INSS será de 8%
• Para sal.acima de R$ 500,00 até R$ 1.000,00 a alíquota de INSS será de 10%
• Para sal.acima de R$ 1.000,00 a alíquota de INSS será de 12%.
No final deverá ser apresentado:
• Salário bruto
• Taxa de INSS
• Valor de INSS
• Salário líquido*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float SALBRUTO, TAXA, INSS, SALIQ;
	//Salário bruto, taxa de INSS, valor de INSS, salário líquido
	
	printf("Digite o salário bruto:\nR$");
	scanf("%f", &SALBRUTO);
	//Recebe o valor do salário bruto
	if(SALBRUTO<=500)
	{
		TAXA=0.08;
	}
	else if(SALBRUTO>500 && SALBRUTO <=1000) 
	{
		TAXA=0.10;
	}
	else
	{
		TAXA=0.12;
	}
	INSS=SALBRUTO*TAXA;
	SALIQ=SALBRUTO*INSS;
	
	printf("Salário bruto: R$%.2f\n", SALBRUTO);
	printf("Taxa de INSS: R$%.2f\n", TAXA);
	printf("Valor de INSS: R$%.2f\n", INSS);
	printf("Salário líquido: R$%.2f\n", SALIQ);
	
	return 0;
}
