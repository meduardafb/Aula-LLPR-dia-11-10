#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float a, b, multiplicacao, divisao, adicao, subtracao;
	
	printf("Calculadora \n\n");
	
	printf("1� N�mero: ");
	scanf("%f", &a);
	
	printf("2� N�mero: ");
	scanf("%f", &b);
	
	multiplicacao = a*b;
	divisao = a/b;
	adicao = a+b;
	subtracao = a-b;
	
	printf("Resultado:\n%f\n%f\n%f\n%f\n", multiplicacao, divisao, adicao, subtracao);
	
	return 0;
	
}

