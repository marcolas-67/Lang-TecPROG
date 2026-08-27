#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int a, b, r, h, som, sub, multi, divis;
		
		printf("escreva um número: \n");
		scanf("%d", &a);
		printf("escrava outro número: \n");
		scanf("%d", &b);
		
		if(a > 0 && b > 0){
			if(a < 10 && b < 10){
				if((a == 2 || a == 3 || a == 7) && (b == 2 || b == 3 || b == 7)){
					r = (a*b)/2;
					h = sqrt((pow(a,2)+pow(b,2)));
			}else{
				som = a+b;
				sub = a-b;
				multi = a*b;
				divis = a/b;
				printf("%d, %d, %d, %d", som, sub, multi, divis);

			}
		}else{
			if(a%b == 0) printf("sim"); else printf("não");
			}
		}
	}

