/*
	Name: ParImpar.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:26
	Description: Programa para identificar quando um n�mero � par ou �mpar por meio de uma opera��o de m�dulo
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	num = 0;
	
	while(1)
	{
    printf("Digite um n�mero: ");
    scanf("%d", &num);

    if(num%2 == 0)
      puts("PAR");
    else
      puts("�MPAR");	
    }
}
