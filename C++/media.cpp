/*
	Name: Media.cpp 
	Author: Beatriz Dile
	Date: 23/03/22 12:28
	Description: Programa para ler tr�s n�meros e obter a m�dia
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	float m;
	a = 0;
	b = 0;
	c = 0;
	m = 0.0;
	
	puts("Digite 3 n�meros inteiros");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	m = (float)(a + b +c)/ 3;
	
	printf("A m�dia �: %.2f", m);
	
}
