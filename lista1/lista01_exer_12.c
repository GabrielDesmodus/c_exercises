/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

12) Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendose que a fórmula usada para este cálculo é:
VL_ACUMULADO = P * (1 + i) n
Onde:
• i = taxa
• P = aplicação mensal e
• n= número de meses
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float I, P, vlACUMULADO;
	//Taxa, Aplicação mensal, Valor acumulado
	int N;
	//Número de meses
	printf("Digite o valor constante da aplicação mensal:\nR$");
	scanf("%f", &P);
	printf("Digite a porcentagem da taxa\n");
	scanf("%f", &I);
	printf("Digite o número de meses:\n");
	scanf("%d", &N);
	
	I = I/100;
	vlACUMULADO = P * pow((1 + I),N); 
	
	printf("O seu rendimento será de: R$%.2f", vlACUMULADO);
	
	return 0;
}
