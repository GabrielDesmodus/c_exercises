/*
Gabriel Santos Sá
3005461
Turma B

Lista 2

12.Faça um programa que leia dez conjuntos de dois valores (Matriz 10 X 2), o primeiro
representando o número do aluno e o segundo representando a sua altura em metros.
Encontre o aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do
mais alto, juntamente com suas alturas.
*/ 

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	//Variável de controle
	float menor, maior, numMaior, numMenor, matriz[10][2];
	//Variáveis que armazenam a menor, maior altura, o Número do maior e menor aluno e a matriz que armazena os valores gerais

	for(i=0;i<10;i++)
	{
		printf("Digite o número do aluno: \n");
		scanf("%f", &matriz[i][1]);
		printf("Digite a altura do aluno em metros: \n");
		scanf("%f", &matriz[i][2]);
		
		if(i==0)
		{
			maior=matriz[i][2];
			numMaior=matriz[i][1];
			menor=matriz[i][2];
			numMenor=matriz[i][1];
		}
		
		if(matriz[i][2]>maior)
		{
			maior=matriz[i][2];
			numMaior=matriz[i][1];
		}
		
		if(matriz[i][2]<menor)
		{
			menor=matriz[i][2];
			numMenor=matriz[i][1];
		}
	}
	
	printf("Número do maior aluno: %.0f. Sua altura: %.2f metros\n",numMaior,maior);
	printf("Número do maior aluno: %.0f. Sua altura: %.2f metros",numMenor,menor);
	
	return 0;
}
