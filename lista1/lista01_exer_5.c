/*Nome: Gabriel Santos S�
Prontu�rio : 3005461
Turma B

5) Fa�a um programa que exiba seu nome na tela enquanto o caractere �S� n�o for digitado pelo
usu�rio. Conte quantas repeti��es foram realizadas.*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int CONTAR=0;
    //N�mero de repeti��es
    
    char CONTROLE='s';
   
    while(CONTROLE!='S')
    //Enquanto o usu�rio n�o digitar S o programa repetir� as instru��es
	{
        printf("ANA\n");
        printf("Digite 'S' para exibir o nome na tela, outro caractere para parar de exibir \n");
        CONTAR++;
        scanf(" %c", &CONTROLE);
    }
    printf("Repeti��es = %d", CONTAR);
    
    return 0;
}
