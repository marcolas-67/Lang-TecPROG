#include <stdio.h>
#include <string.h>

int multDigito(int dig, int valor){
	return dig*valor;
		 
}

int main(){

int soma, resto, resto2;
int dg1, dg2, dg3, dg4, dg5, dg6, dg7, dg8, dg9, dgv, dgv2;
	printf("Escreva o CPF com pontos e traços...\n");
	scanf("%1d%1d%1d.%1d%1d%1d.%1d%1d%1d-%1d%1d", &dg1, &dg2, &dg3, &dg4, &dg5, &dg6, &dg7, &dg8, &dg9, &dgv, &dgv2);

printf("Confirme o CPF %d%d%d.%d%d%d.%d%d%d-%d%d", dg1, dg2, dg3, dg4, dg5, dg6, dg7, dg8, dg9, dgv, dgv2);

soma = multDigito(dg1,10)+multDigito(dg2,9)+multDigito(dg3,8)+
		multDigito(dg4,7)+multDigito(dg5,6)+multDigito(dg6,5)+
		multDigito(dg7,4)+multDigito(dg8,3)+multDigito(dg9,2);

soma *=10;
resto =  soma%11;
if (resto == 10) resto = 0;
printf("\n%d", resto);

soma = multDigito(dg1,11)+multDigito(dg2,10)+multDigito(dg3,9)+
		multDigito(dg4,8)+multDigito(dg5,7)+multDigito(dg6,6)+
		multDigito(dg7,5)+multDigito(dg8,4)+multDigito(dg9,3)+multDigito(dgv,2);
		
soma *=10;
resto2 =  soma%11;
if (resto2 == 10) resto2 = 0;
printf("\n%d", resto2);

dg1*10;
dg2*9;
dg3*8;
dg4*7;
dg5*6;
dg6*5;
dg7*4;
dg8*3;
dg9*2;

if (resto == dgv && resto2 == dgv2) {
    printf("\nCPF VALIDO!");
} else {
    printf("\nCPF INVALIDO!");
}
}
