#include <stdio.h>
//pedir um valor e ver qual a menor qunatidade de notas pra chegar nele...
//Agora queremos descobrir quantas notas de R$200 cabem no valor X...
int main(){

int qnt200, qnt100, qnt50, qnt20, qnt10, qnt5, qnt1;
int resto200, resto100, resto50, resto20, resto10, resto5;
int valor;

	printf("Escreva o valor desejado: \n");
	scanf("%d", &valor);
	
	qnt200 = valor / 200;
	resto200 = valor % 200;
	
	qnt100 = resto200 / 100;
	resto100 = resto200 % 100;
		
	qnt50 = resto100 / 50;
	resto50 = resto100 % 50;
	
	qnt20 = resto50 / 20;
	resto20 = resto50 % 20;
	
	qnt10 = resto20 / 10;
	resto10 = resto20 % 10;
	
	qnt5 = resto10 / 5;
	resto5 = resto10 % 5;
	
	printf("notas de 200: %d\n", qnt200);
	printf("%d\n", resto200);
	printf("notas de 100: %d\n", qnt100);
	printf("%d\n", resto100);
	printf("notas de 50: %d\n", qnt50);
	printf("%d\n", resto50);
	printf("notas de 20: %d\n", qnt20);
	printf("%d\n", resto20);
	printf("notas de 10: %d\n", qnt10);
	printf("%d\n", resto10);
	printf("notas de 5: %d\n", qnt5);
	printf("%d\n", resto5);

}
