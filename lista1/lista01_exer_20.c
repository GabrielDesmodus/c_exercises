/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

20) Um hotel cobra R$ 50,00 reais a di�ria e mais uma taxa de servi�os. A taxa de servi�os � de:
� 15,30 por dia, se n�mero de di�rias <15
� 10,00 por dia, se n�mero de di�rias =15
� 8,50 por dia, se n�mero de di�rias >15
Fa�a um programa que l� a quantidade de dias que o h�spede ficou no hotel e imprime a taxa e total a
pagar.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int dias;
	//dias em que o h�spede ficou no hotel
	float taxa, total;
	//taxa de servi�o, total a pagar
	
	printf("Digite a quantidade de dias que o h�spede ficou no hotel:\n");
	scanf("%d", &dias);
	
	if(dias<15) 
	{
		taxa=15.30;
	}
	else if(dias=15)
	{
		taxa=10;
	}
	else if(dias>15)
	{
		taxa=8.50;
	}
	
	total=(dias*50)+(dias*taxa);
	
	printf("Taxa de servi�os: R$%.2f\nTotal a pagar: R$%.2f", taxa, total);
	
	return 0;
}
