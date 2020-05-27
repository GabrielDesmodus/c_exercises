/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

26) Fa�a um programa que leia o c�digo de um produto e execute as tarefas (uma das seguintes tarefas
de cada vez), conforme tabela abaixo:
0 � Encerra o programa
1 � Inclui uma unidade no estoque
2 � Exclui uma unidade no estoque
3 � Mostra o total dispon�vel no estoque
4 � Mostra o total de entradas no estoque
5 � Mostra o total de sa�das no estoque
Outro c�digo escrever: �C�digo Inv�lido
OBS.: A cada tarefa executada dever� voltar ao menu inicial
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int codigo, tarefa, unidade, entradas, saidas;
	//C�digo de produto, C�digo da tarefa, Unidades, Entradas, Sa�das
	
	tarefa=20;
	//Para que a estrutura while n�o seja interrompida no come�o
	
	printf("Digite o c�digo do produto:\n");
	scanf("%d", &codigo);
	while(tarefa!=0)
	{
		printf("Digite um c�digo para executar as seguintes tarefas:\n");
		printf("0 � Encerra o programa\n");
		printf("1 � Inclui uma unidade no estoque\n");
		printf("2 � Exclui uma unidade no estoque\n");
		printf("3 � Mostra o total dispon�vel no estoque\n");
		printf("4 � Mostra o total de entradas no estoque\n");
		printf("5 � Mostra o total de sa�das no estoque\n");
		scanf("%d", &tarefa);
		switch(tarefa)
		{
			case 0:
				return 0;
			
			case 1:
				unidade++;
				entradas++;
				break;
			
			case 2:
				unidade--;
				saidas++;
				break;
				
			case 3:
				printf("\n\nTotal dispon�vel no estoque: %d\n\n", unidade);
				break;
				
			case 4:
				printf("\n\nTotal de entradas no estoque: %d\n\n", entradas);
				break;
				
			case 5:
				printf("\n\nTotal de saidas no estoque: %d\n\n", saidas);
				break;
				
			default:
				printf("C�digo inv�lido\n");
		}
	
	}
	
	return 0;
}
