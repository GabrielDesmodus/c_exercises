/*
Gabriel Santos S�
3005461
Turma B

Lista 2

16.Escreva um programa que leia um conjunto N (tam. 20) de n�meros inteiros e imprima 
os seguintes resultados: 
� media dos n�meros;
� maior dos n�meros;
� menor dos n�meros;
� produto de todos os n�meros.*/

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int maior, menor, i, N[20];
	float media, soma, produto;
	for(i=0;i<20;i++)
	{
		printf("Insira um n�mero: \n");
		scanf("%d",&N[i]);
		produto=produto*N[i];
		soma=soma+N[i];
		if(i==0)
		{
			maior=N[i];
			menor=N[i];
		}
		
		if(N[i]>maior)
		{
			maior=N[i];
		}
		
		if(N[i]<maior)
		{
			menor=N[i];
		}	
	}
	media=soma/20;
	printf("A m�dia dos n�meros � de %f\n", media);
	printf("A maior dos n�meros � %d\n", maior);
	printf("A maior dos n�meros � %d\n", menor);
	printf("O produto de todos os n�meros � %f\n", produto);
	return 0;
}

