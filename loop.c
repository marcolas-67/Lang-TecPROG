#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int valor1, valor2, valor3_razao, i;

    printf("Insira o primeiro VALOR: ");
    scanf("%d", &valor1);

    printf("Insira o segundo VALOR: ");
    scanf("%d", &valor2);

    printf("Insira o terceiro VALOR (Razão): ");
    scanf("%d", &valor3_razao);


    if(valor1 <= valor2) {
    for(i = valor1; i <= valor2; i+= valor3_razao ){
        printf("Contando... %d\n", i);
    }
     }else {
         for(i = valor1; i >= valor2; i -= valor3_razao) {
            printf("%d ", i);
        }
     }
  
    float num;

    printf("Digite um Numero: ");
    scanf("%f", &num);

    if(num > 0 ){
        for(i = 1; i == num ; i*=2   )
    }
    return 0;
}
