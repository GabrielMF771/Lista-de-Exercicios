#include <stdio.h>

int main(){
	
	int anos, meses, dias, resultado;
	
	printf("escreva sua idade em anos, meses e dias\n");
	printf("primeiro, escreva seus anos: ");
	scanf("%d", &anos);
	
	printf("agora, meses: ");
	scanf("%d", &meses);
	
	printf("por fim, dias: ");
	scanf("%d", &dias);
	
	resultado = dias + (meses * 30) + (anos * 365);
	
	
	printf("voce possui %d dias de vida", resultado);
	
	
	
}
