#include <stdio.h>
 int main()
  { 
double far, cel;

printf("\nEscreva o valor da temperatura em Fahrenheit: ");
scanf("%lf",&far);

cel = (far - 32)/9 *5;

      
printf("\nSua temperatura em Celsius: %.1f graus", cel);

      
		 return 0;
		  }
