/*
Gabriel Santos S�
3005461
Turma B

Lista 2

12.Fa�a um programa que leia dez conjuntos de dois valores (Matriz 10 X 2), o primeiro
representando o n�mero do aluno e o segundo representando a sua altura em metros.
Encontre o aluno mais baixo e o mais alto. Mostre o n�mero do aluno mais baixo e do
mais alto, juntamente com suas alturas.
*/ 

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int i;
	//Vari�vel de controle
	float menor, maior, numMaior, numMenor, matriz[10][2];
	//Vari�veis que armazenam a menor, maior altura, o N�mero do maior e menor aluno e a matriz que armazena os valores gerais

	for(i=0;i<10;i++)
	{
		printf("Digite o n�mero do aluno: \n");
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
	
	printf("N�mero do maior aluno: %.0f. Sua altura: %.2f metros\n",numMaior,maior);
	printf("N�mero do maior aluno: %.0f. Sua altura: %.2f metros",numMenor,menor);
	
	return 0;
}
