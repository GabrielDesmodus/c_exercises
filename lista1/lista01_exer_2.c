/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

2) O usuário deve informar os valores dos catetos de um triângulo retângulo e que ao final
o programa exibe a sua hipotenusa.*/

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float A, B, C;
	//Primeiro cateto, segundo cateto e hipotenusa
	
	printf("Digite o primeiro cateto:\n");
	scanf("%f", &A);
	printf("Digite o segundo cateto:\n");
	scanf("%f", &B);
	C = sqrt(pow(A, 2) + pow(B, 2));
	//Atribui a C a raiz quadrada da soma dos catetos elevados a 2
	printf("HIPOTENUSA = %f", C);
	return 0;
}