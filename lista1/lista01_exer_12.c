/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

12) Uma pessoa resolveu fazer uma aplica��o em uma poupan�a programada. Para calcular seu
rendimento, ela dever� fornecer o valor constante da aplica��o mensal, a taxa e o n�mero de meses.
Sabendose que a f�rmula usada para este c�lculo �:
VL_ACUMULADO = P * (1 + i) n
Onde:
� i = taxa
� P = aplica��o mensal e
� n= n�mero de meses
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float I, P, vlACUMULADO;
	//Taxa, Aplica��o mensal, Valor acumulado
	int N;
	//N�mero de meses
	printf("Digite o valor constante da aplica��o mensal:\nR$");
	scanf("%f", &P);
	printf("Digite a porcentagem da taxa\n");
	scanf("%f", &I);
	printf("Digite o n�mero de meses:\n");
	scanf("%d", &N);
	
	I = I/100;
	vlACUMULADO = P * pow((1 + I),N); 
	
	printf("O seu rendimento ser� de: R$%.2f", vlACUMULADO);
	
	return 0;
}
