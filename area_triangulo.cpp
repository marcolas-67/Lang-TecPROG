	#include <stdio.h>

	int main(){
	float cateto1, cateto2, area;
		printf("escreva o cateto 1: ");
		scanf("%f", &cateto1);
		
		printf("escreva o cateto 2: ");
		scanf("%f", &cateto2);
	

		area = (cateto1 * cateto2)/2;
		
		printf("a area do triangulo relangulo: %.2f", area);
		
}
