/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

21) Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (inclusive os valores
10 e 20 no intervalo) e quantos deles estão fora deste intervalo.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int CONT,acumInter=0, acumulador=0;
	float valor;
	
	printf("Insira 10 valores:\n");
	for(CONT=1; CONT<=10; CONT++)
	{
		scanf("%f", &valor);
		if(valor>=10 && valor<=20)
		{
			acumInter = acumInter+1;
		}
		else
		{
			acumulador = acumulador+1;
		}
	}
	
	printf("%d número(s) estão dentro do intervalo [10,20]. %d número(s) não estão.", acumInter, acumulador);
	
	return 0;
}
