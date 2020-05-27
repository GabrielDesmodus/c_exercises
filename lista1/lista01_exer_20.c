/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

20) Um hotel cobra R$ 50,00 reais a diária e mais uma taxa de serviços. A taxa de serviços é de:
• 15,30 por dia, se número de diárias <15
• 10,00 por dia, se número de diárias =15
• 8,50 por dia, se número de diárias >15
Faça um programa que lê a quantidade de dias que o hóspede ficou no hotel e imprime a taxa e total a
pagar.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int dias;
	//dias em que o hóspede ficou no hotel
	float taxa, total;
	//taxa de serviço, total a pagar
	
	printf("Digite a quantidade de dias que o hóspede ficou no hotel:\n");
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
	
	printf("Taxa de serviços: R$%.2f\nTotal a pagar: R$%.2f", taxa, total);
	
	return 0;
}
