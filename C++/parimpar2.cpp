/*
	Name: ParImpar.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:26
	Description: Programa para identificar quando um n�mero � par ou �mpar
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num, quoc, resto;
	num = quoc = resto = 0;
	
	while(1)
	{
    printf("Digite um n�mero: ");
    scanf("%i", &num);
	 
	quoc = num / 2;
	resto = num - (quoc * 2);

    if(resto == 0)
      puts("PAR");
    else
      puts("�MPAR");	
	}
}

