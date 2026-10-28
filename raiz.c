#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int valor;
    printf("insira um valor par:\n");
    scanf("%d", &valor);

    while (valor%2==1){
        printf("Valor inserido nao e par, \n insira un novo valor: ");
        scanf("%d", &valor);
}
do {
    printf("insira um valor par: ");
    scanf("%d", &valor);
}while(valor%2==1);
    printf("a raiz de %d = %f", valor, sqrt(valor));
    
    return 0;
}