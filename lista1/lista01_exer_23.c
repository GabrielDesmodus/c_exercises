/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

23) Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para
estar em condições, um dosseguintes requisitos deve ser satisfeito:
- Ter no mínimo 65 anos de idade.
- Ter trabalhado no mínimo 30 anos.3
- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
Com base nas informações acima, faça um programa que leia: o número do empregado (código), o ano de
seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de
trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int codigo, anoNasc, anoIngres, idade, tempoTrab;
	//Código, Ano de nascimento, Ano de ingresso, Idade, Tempo de trabalho
	
	printf("Digite o seu código\n");
	scanf("%d", &codigo);
	printf("Digite o seu ano de nascimento\n");
	scanf("%d", &anoNasc);
	printf("Digite o seu ano de ingresso na empresa\n");
	scanf("%d", &anoIngres);
	
	idade=2019-anoNasc;
	//Idade = Ano atual - Ano de nascimento
	printf("Idade: %d\n", idade);
	
	tempoTrab=2019-anoIngres;
	//Tempo de trabalho = Ano atual - Ano de ingresso
	printf("Tempo de trabalho: %d\n", tempoTrab);
	
	if(idade>=65)
	{
		printf("Requerer aposentadoria");
	}
	else if(tempoTrab>=30)
	{
		printf("Requerer aposentadoria");
	}
	else if(idade>=65 && tempoTrab>=25)
	{
		printf("Requerer aposentadoria");
	}
	else
	{
		printf("Não requerer");
	}
	
	return 0;
}
