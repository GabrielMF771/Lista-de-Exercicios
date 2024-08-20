#include <stdio.h>
 int main()
  { 
  float novo, salario, percentual;
  
   printf("*CALCULO DE REAJUSTE SALARIAL*\n");
    printf("\nEscreva o valor atual do salario:"); 
	scanf("%f",&salario);
	 printf("\nEscreva o valor em porcentagem do reajuste salarial:");
	  scanf("%f",&percentual);
	   percentual=percentual / 100; 
	   novo = salario + (salario * percentual);
	    printf("\nSeu novo salario é : %f",novo);
		 return 0;
		  }
