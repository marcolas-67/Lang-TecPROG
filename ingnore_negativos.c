#include <stdio.h>

int main() {
    int numero;
    int validos = 0; //quantos numeros sao validos 
    int contador = 0; //quantos numeros foram lidos (positivos)
    int soma = 0;
    float media;

    printf("escreva 10 numeros: ");
    
        while(contador < 10){
            scanf("%d", &numero);
            contador++;
        
    
        if(numero >= 0){
        soma += numero;
        validos++;
    }
}
    if(validos > 0){
        media = (float)soma / validos;
        printf("soma: %d\n", soma);
        printf("media: %.2f\n", media);
} else {
    printf("nenhum numero valido foi digitado: \n");
}
    return 0;
}