/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

1) Vasos comunicantes s�o preenchidos, considerando o valor central a soma todos os valores do lado
esquerdo e com o valor da m�dia do valor central preencher o lado direito.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float N1, N2, N3, S, M;
	//Primeiro n�mero, segundo, terceiro, Soma e M�dia

	printf("Insira o primeiro valor do lado esquerdo\n");
	scanf("%f", &N1);

	printf("Insira o segundo valor do lado esquerdo\n");
	scanf("%f", &N2);

	printf("Insira o terceiro valor do lado esquerdo\n");
	scanf("%f", &N3);

	S = N1 + N2 + N3;
	//Soma dos n�meros
	M = S / 3;
	//M�dia dos n�meros

	printf("O valor do centro ser�: %f\n", S);
	printf("Os valores do lado direito ser�o: %f, %f e %f", M, M, M);

	return 0;
}