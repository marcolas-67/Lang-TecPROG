#include <Stdio.h>

int main (){
int a, b, aux;
	
	printf("escreva o primeiro numero: \n");
	scanf("%d", &a);
	printf("escreva o primeiro numero: \n");
	scanf("%d", &b);
	
		aux = a;
		a = b;
			printf("%d\n", a);
	
		b = aux;
			printf("%d\n", b);

		return 0;
}

