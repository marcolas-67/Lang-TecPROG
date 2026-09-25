#include <stdio.h>
#include <stdlib.h>
#define pi 3.14 

	int main(){
		
	float raio, area;	
		
		printf("digite o raio do circulo: ");
		scanf("%f", &raio);
		
		area = pi * (raio*2);
		
		printf("a area do circulo: %.2f", area);		
		
	}
