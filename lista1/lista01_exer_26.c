/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

26) Faça um programa que leia o código de um produto e execute as tarefas (uma das seguintes tarefas
de cada vez), conforme tabela abaixo:
0 – Encerra o programa
1 – Inclui uma unidade no estoque
2 – Exclui uma unidade no estoque
3 – Mostra o total disponível no estoque
4 – Mostra o total de entradas no estoque
5 – Mostra o total de saídas no estoque
Outro código escrever: “Código Inválido
OBS.: A cada tarefa executada deverá voltar ao menu inicial
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int codigo, tarefa, unidade, entradas, saidas;
	//Código de produto, Código da tarefa, Unidades, Entradas, Saídas
	
	tarefa=20;
	//Para que a estrutura while não seja interrompida no começo
	
	printf("Digite o código do produto:\n");
	scanf("%d", &codigo);
	while(tarefa!=0)
	{
		printf("Digite um código para executar as seguintes tarefas:\n");
		printf("0 – Encerra o programa\n");
		printf("1 – Inclui uma unidade no estoque\n");
		printf("2 – Exclui uma unidade no estoque\n");
		printf("3 – Mostra o total disponível no estoque\n");
		printf("4 – Mostra o total de entradas no estoque\n");
		printf("5 – Mostra o total de saídas no estoque\n");
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
				printf("\n\nTotal disponível no estoque: %d\n\n", unidade);
				break;
				
			case 4:
				printf("\n\nTotal de entradas no estoque: %d\n\n", entradas);
				break;
				
			case 5:
				printf("\n\nTotal de saidas no estoque: %d\n\n", saidas);
				break;
				
			default:
				printf("Código inválido\n");
		}
	
	}
	
	return 0;
}
