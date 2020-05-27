/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

30) Um salário tem os seguintes componentes:
- valor nominal
- adicional devido a horas extras
- valor descontado para o INSS (10% do valor a receber, limitado a 150 reais).
11
O valor adicional devido às horas extras é calculado dividindo-se o valor nominal por 176 (22 dias de
8 horas), multiplicando-se pela quantidade de horas e ainda com um acréscimo de 50%.
Escrever um programa que lê os valores necessários, calcula e mostra na tela os componentes do
salário e o salário líquido resultante para o empregado. Não é preciso prever arredondamentos, mas os
valores devem ser mostrados na tela com duas casas decimais.
Exemplos: para um salário de R$ 1.000,00, com 30 horas extras, teremos R$ 255,68 de horas extras
[(1.000/176)*30*1,5], R$ 125,57 de INSS e um salário líquido de R$ 1.130,11. Para um salário de R$
2.000,00 e 20 horas extras, seriam R$ 340,91 de horas extras, R$ 150,00 de INSS (e não os 10%), com um
salário líquido de R$ 2.190,91.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float valorAdc, valorNom, horasExt, inss, liquido;
	//Valor adicional, Valor nominal, Quantidade de horas extras, Valor do INSS, Salário líquido
	
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
	printf("Para um salário de R$%.2f e %.2f hora(s) extra(s): \nR$%.2f de horas extras, \nR$ %.2f de INSS, \nsalário líquido de R$ %.2f.", valorNom, horasExt, valorAdc, inss, liquido);
	return 0;
}
