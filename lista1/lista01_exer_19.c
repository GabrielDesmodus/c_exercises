/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

19) Fa�a um algoritmo que, lendo 3 n�meros correspondentes aos coeficientes a, b, e c de uma
equa��o do 2� grau, calcule seu DELTA e tamb�m as ra�zes desta equa��o, imprimindo seus
valores.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float delta,A,B,C,x1,x2;
	//O valor de delta, de A, de B, de C, a Primeira ra�z, a Segunda ra�z
	
	printf("Insira o valor de A:\n");
	scanf("%f", &A);
	printf("Insira o valor de B:\n");
	scanf("%f", &B);
	printf("Insira o valor de C:\n");
	scanf("%f", &C);
	
	delta=pow(B,2)-4*A*C;
	x1=(-B+sqrt(delta))/2*A;
	//c�lculo para encontrar o valor da primeira ra�z
	
	x2=(-B-sqrt(delta))/2*A;
	//c�lculo para encontrar o valor da segunda ra�z
	
	printf("O valor de Delta �: %f\n", delta);
	printf("As ra�zes da equa��o s�o %f e %f\n", x1, x2);
	
	return 0;
}
