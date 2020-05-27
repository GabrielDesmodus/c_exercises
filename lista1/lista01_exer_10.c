/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

10) Fa�a um Programa que leia o sal�rio bruto de uma pessoa e calcule o desconto do INSS levando em
considera��o o seguinte:
� Para sal�rios at� R$ 500,00 a al�quota de INSS ser� de 8%
� Para sal.acima de R$ 500,00 at� R$ 1.000,00 a al�quota de INSS ser� de 10%
� Para sal.acima de R$ 1.000,00 a al�quota de INSS ser� de 12%.
No final dever� ser apresentado:
� Sal�rio bruto
� Taxa de INSS
� Valor de INSS
� Sal�rio l�quido*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float SALBRUTO, TAXA, INSS, SALIQ;
	//Sal�rio bruto, taxa de INSS, valor de INSS, sal�rio l�quido
	
	printf("Digite o sal�rio bruto:\nR$");
	scanf("%f", &SALBRUTO);
	//Recebe o valor do sal�rio bruto
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
	
	printf("Sal�rio bruto: R$%.2f\n", SALBRUTO);
	printf("Taxa de INSS: R$%.2f\n", TAXA);
	printf("Valor de INSS: R$%.2f\n", INSS);
	printf("Sal�rio l�quido: R$%.2f\n", SALIQ);
	
	return 0;
}
