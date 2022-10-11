#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a, multiplicacao;
	
	printf("Programa Para Transformar Minutos Em Segundos \n\n");
	
	printf("Digite os Minutos: ");
	scanf("%d", &a);
	
	multiplicacao = a*60;
	
	printf("Resultado em Segundos: %d", multiplicacao);
	
	
	return 0;
}

