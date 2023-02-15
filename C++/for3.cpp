/*
	Name: For3.cpp
	Author: Beatriz Dile
	Date: 18/03/22 08:43
	Description: Programa para demonstrar a utiliza��o do la�o de repeti��o "For" 
	             e exibir a tabuada de multiplica��o de dois numeros escolhidos pelo usuario.
	             *De 0 ao 10*
	             *De 10 ao 0*
*/

# include <stdio.h> //StanDard Input Output
# include <conio.h> //CONsole Input Output
# include <locale.h>//Blibioteca para acentua��o

main()
{
   setlocale(LC_ALL, "Portuguese");
   int num, i;
   num = 0;
 
  printf("Digite um n�mero: ");
  scanf("%d", &num);
  
  for(i = 0;i <= 10; i++)
   printf("\n%d x %d = %d", num, i, num*i);
   
   printf("\n\nDigite um n�mero: ");
  scanf("%d", &num);
  
  for(i = 10;i >= 0; i--)
   printf("\n%d x %d = %d", num, i, num*i);
  

}//fim do main
