/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

13.Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
de uma loja, em cada linha represente um mês do ano, e cada coluna, uma semana do
mês. Calcule e imprima:
• total vendido em cada mês do ano;
• total vendido em cada semana durante todo o ano;
• total vendido no ano.*/

#include<stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	float soma, somaM, matriz[12][4];
	//Variável que acumula os valores, Os valores dos meses a matriz
	int i,j;
	//Variáveis de controle
	for(i=0;i<12;i++)
	{
		somaM=0;
	     for(j=0;j<4;j++)
	     {
	     	  printf("\nInsira o valor da semana %d do mês %d: \nR$",j+1,i+1);
	          scanf("%f", &matriz[i][j]);
	          soma=soma+matriz[i][j];
	          somaM=somaM+matriz[i][j];
	     }
	     printf("\nO valor total do mês %d é de R$%.2f\n",i+1,somaM);
	}
	
	printf("\nO valor total do ano é de R$%.2f\n",soma);
	
	for(i=0;i<12;i++)
	{
	     for(j=0;j<4;j++)
	     {
	          printf("Mês %d. Valor da semana %d: R$%.2f\n",i+1 ,j+1,matriz[i][j]);
	     }
	}
	return 0;
}
