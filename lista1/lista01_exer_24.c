/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

24) Faça um Programa que leia números até que o usuário não queira mais digitar os números,
pressionando o valor “0 (zero)”. No final exibir o resultado da soma dos valores lidos.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float numero, acumulador;
	//Número digitado, Acumulador dos números digitados
	
	printf("Digite valores para serem somados. Digite 0 para terminar a leitura\n");
	numero=10;
	//Para a estrutura while não ser imediatamente interrompida
	
	while(numero!=0)
	{
		scanf("%f", &numero);
		acumulador=acumulador+numero;	
	}
	
	printf("Soma dos valores: %f", acumulador);
	
	return 0;
}
