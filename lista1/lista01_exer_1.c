/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

1) Vasos comunicantes são preenchidos, considerando o valor central a soma todos os valores do lado
esquerdo e com o valor da média do valor central preencher o lado direito.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float N1, N2, N3, S, M;
	//Primeiro número, segundo, terceiro, Soma e Média

	printf("Insira o primeiro valor do lado esquerdo\n");
	scanf("%f", &N1);

	printf("Insira o segundo valor do lado esquerdo\n");
	scanf("%f", &N2);

	printf("Insira o terceiro valor do lado esquerdo\n");
	scanf("%f", &N3);

	S = N1 + N2 + N3;
	//Soma dos números
	M = S / 3;
	//Média dos números

	printf("O valor do centro será: %f\n", S);
	printf("Os valores do lado direito serão: %f, %f e %f", M, M, M);

	return 0;
}