/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

23) Uma empresa quer verificar se um empregado est� qualificado para a aposentadoria ou n�o. Para
estar em condi��es, um dosseguintes requisitos deve ser satisfeito:
- Ter no m�nimo 65 anos de idade.
- Ter trabalhado no m�nimo 30 anos.3
- Ter no m�nimo 60 anos e ter trabalhado no m�nimo 25 anos.
Com base nas informa��es acima, fa�a um programa que leia: o n�mero do empregado (c�digo), o ano de
seu nascimento e o ano de seu ingresso na empresa. O programa dever� escrever a idade e o tempo de
trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'N�o requerer'.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int codigo, anoNasc, anoIngres, idade, tempoTrab;
	//C�digo, Ano de nascimento, Ano de ingresso, Idade, Tempo de trabalho
	
	printf("Digite o seu c�digo\n");
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
		printf("N�o requerer");
	}
	
	return 0;
}
