#include <stdio.h>
#include <stdlib.h>

float B, b, h, areat;
	printf("valor da base maior:\n");
	scanf("%f", &B);
	
	printf("valor da base menor:\n");
	scanf("%f", &b);
	
	printf("valor da altura:\n");
	scanf("%f", &h);
	
	areat = ((B+b)*h)/2;
	
	printf("A area do trapezio = %.2f", areat);
	
	return 0;
}
