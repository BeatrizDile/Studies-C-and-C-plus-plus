/*
	Name: ParImpar4.cpp
	Author: Beatriz Dile
	Date: 23/03/22 13:26
	Description: Se o n�mero for par, divida-o por 2;
	Caso o n�mero seja �mpar, calcule o seu triplo;
	Se o n�mero digitado for zero ou menor que, mostre que o n�mero digitado � inv�lido
*/

#include <conio.h>
#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	while (1)
	{
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    
    if(num <= 0){
    	break;
	}
    
	if(num%2 == 0) 
      printf("\nSeu n�mero dividido por dois: %d \n\n", num/2);
    else
      printf("\nSeu n�mero multiplicado por tr�s: %d \n\n", num*3);
	  	
    }
   
	puts("\nSeu n�mero � inv�lido");
}
