#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int a, b, c;
	float m1, m2, m3, m4;
	
	printf("Calculadora do Ambr�sio\n\n ");
	
	printf("1� N�mero: ");
	scanf("%d", &a);
	
	printf("2� N�mero: ");
	scanf("%d", &b);
	
	printf("3� N�mero: ");
	scanf("%d", &c);
	
	m1= (a*b)/c;
	m2= (a*a)+b+5*c;
	m3= a*b*c+b+c/3*5-1;
	m4=((a*b*c)*(a*b*c)*(a*b*c))/2;
	
	printf("Os Resultados das Form�las s�o:\n%f\n%f\n%f\n%f\n", m1, m2, m3, m4);
	
	return 0;
}

