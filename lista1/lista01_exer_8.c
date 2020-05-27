/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

8) Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros números
naturais.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	float N, SOMA=0;
	//Número digitado pelo usuário, Váriavel que acumula o valor de CONT
	int CONT=1;
	//Variável que acumula +1 a cada vez que se repete a esturutura
	
	printf("Digite um número inteiro positivo:\n");
	scanf("%f", &N);
	if(N>=0)
	{
		while(CONT <= N)
		{
			SOMA=SOMA+CONT;
			CONT++;
		}
		printf("A soma dos primeiros %f números naturais é: %f", N, SOMA);
	}
	else
	{
		printf("Não é um número inteiro positivo");
	}
	
	
	
	return 0;
}
