/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

19) Faça um algoritmo que, lendo 3 números correspondentes aos coeficientes a, b, e c de uma
equação do 2º grau, calcule seu DELTA e também as raízes desta equação, imprimindo seus
valores.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float delta,A,B,C,x1,x2;
	//O valor de delta, de A, de B, de C, a Primeira raíz, a Segunda raíz
	
	printf("Insira o valor de A:\n");
	scanf("%f", &A);
	printf("Insira o valor de B:\n");
	scanf("%f", &B);
	printf("Insira o valor de C:\n");
	scanf("%f", &C);
	
	delta=pow(B,2)-4*A*C;
	x1=(-B+sqrt(delta))/2*A;
	//cálculo para encontrar o valor da primeira raíz
	
	x2=(-B-sqrt(delta))/2*A;
	//cálculo para encontrar o valor da segunda raíz
	
	printf("O valor de Delta é: %f\n", delta);
	printf("As raízes da equação são %f e %f\n", x1, x2);
	
	return 0;
}
