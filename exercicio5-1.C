#include <stdio.h>

int main (){
	
int a, b, c, d;
float soma, multi, media;

	printf("escreva um numero: \n");
	scanf("%d", &a);
	printf("escreva um numero: \n");
	scanf("%d", &b);
	printf("escreva um numero: \n");
	scanf("%d", &c);
	printf("escreva um numero: \n");
	scanf("%d", &d);
	
soma = a + b + c + d;
multi = a * b * c * d;
media = soma / 4;

printf("%f \n %f \n %f \n", soma, multi, media);	
}
