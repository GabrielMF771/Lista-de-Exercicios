#include <stdio.h>

int main(){
	
	int custo;
	float distribuidor, impostos, valorfinal;
	
	printf("insira o custo de fabrica de um carro: ");
	scanf("%d", &custo);
	
	distribuidor = custo * 0.28;
	impostos = custo * 0.45;
	valorfinal = distribuidor + impostos + custo;
	
	printf("o valor final do carro sera: %.2f.\n", valorfinal);
	printf("valor dos impostos: %.2f.\n", impostos);
	printf("o valor do distribuidor: %.2f.\n", distribuidor);
	
}
