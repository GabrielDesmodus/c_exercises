/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

24) Fa�a um Programa que leia n�meros at� que o usu�rio n�o queira mais digitar os n�meros,
pressionando o valor �0 (zero)�. No final exibir o resultado da soma dos valores lidos.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float numero, acumulador;
	//N�mero digitado, Acumulador dos n�meros digitados
	
	printf("Digite valores para serem somados. Digite 0 para terminar a leitura\n");
	numero=10;
	//Para a estrutura while n�o ser imediatamente interrompida
	
	while(numero!=0)
	{
		scanf("%f", &numero);
		acumulador=acumulador+numero;	
	}
	
	printf("Soma dos valores: %f", acumulador);
	
	return 0;
}
