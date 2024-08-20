#include <stdio.h>

int main()
{
int base , altura, area;

printf("*CALCULO DA AREA DO RETANGULO*\n");
printf("\nEscreva o tamanho da base do retangulo: ");
scanf("%d",&base);
printf("\nEscreva o tamanho da altura do retangulo:  ");
scanf("%d", &altura);

area = altura * base;

printf("\nA area do retangulo e: %d",area);
return 0;
}
