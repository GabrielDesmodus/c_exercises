/*Nome: Gabriel Santos Sá
Prontuário : 3005461
Turma B

5) Faça um programa que exiba seu nome na tela enquanto o caractere “S” não for digitado pelo
usuário. Conte quantas repetições foram realizadas.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int CONTAR=0;
    //Número de repetições
    
    char CONTROLE='s';
   
    while(CONTROLE!='S')
    //Enquanto o usuário não digitar S o programa repetirá as instruções
	{
        printf("ANA\n");
        printf("Digite 'S' para exibir o nome na tela, outro caractere para parar de exibir \n");
        CONTAR++;
        scanf(" %c", &CONTROLE);
    }
    printf("Repetições = %d", CONTAR);
    
    return 0;
}
