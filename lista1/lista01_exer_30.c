/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

30) Um sal�rio tem os seguintes componentes:
- valor nominal
- adicional devido a horas extras
- valor descontado para o INSS (10% do valor a receber, limitado a 150 reais).
11
O valor adicional devido �s horas extras � calculado dividindo-se o valor nominal por 176 (22 dias de
8 horas), multiplicando-se pela quantidade de horas e ainda com um acr�scimo de 50%.
Escrever um programa que l� os valores necess�rios, calcula e mostra na tela os componentes do
sal�rio e o sal�rio l�quido resultante para o empregado. N�o � preciso prever arredondamentos, mas os
valores devem ser mostrados na tela com duas casas decimais.
Exemplos: para um sal�rio de R$ 1.000,00, com 30 horas extras, teremos R$ 255,68 de horas extras
[(1.000/176)*30*1,5], R$ 125,57 de INSS e um sal�rio l�quido de R$ 1.130,11. Para um sal�rio de R$
2.000,00 e 20 horas extras, seriam R$ 340,91 de horas extras, R$ 150,00 de INSS (e n�o os 10%), com um
sal�rio l�quido de R$ 2.190,91.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float valorAdc, valorNom, horasExt, inss, liquido;
	//Valor adicional, Valor nominal, Quantidade de horas extras, Valor do INSS, Sal�rio l�quido
	
	scanf("%f", &valorNom);
	scanf("%f", &horasExt);
	
	valorAdc=(valorNom/176)*horasExt*1.5;
	inss=(valorNom+valorAdc)/10;
	if(inss>150)
	{
		inss=150;
		//Para impedir que o valor passe de R$150,00
	}
	liquido=valorNom+(valorAdc-inss);
	printf("Para um sal�rio de R$%.2f e %.2f hora(s) extra(s): \nR$%.2f de horas extras, \nR$ %.2f de INSS, \nsal�rio l�quido de R$ %.2f.", valorNom, horasExt, valorAdc, inss, liquido);
	return 0;
}
