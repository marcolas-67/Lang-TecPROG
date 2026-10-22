#include <stdio.h>

int main (){
    char palavra[50];
    int i;
    int inicio;
    int fim;
    int ehPalindromo = 1;

    printf("escreva uma palavra: \n");
    scanf("%s", palavra);

    for (i=0; i<50 && palavra[i] != '\0'; i++){
    }

    inicio = 0;
    fim = i - 1;

    while (inicio < fim){
        if (palavra[inicio] != palavra[fim]){
            ehPalindromo = 0;
        }
        inicio++;
        fim--;
    }

    if (ehPalindromo == 1){
        printf("\n a palavra e um palindromo");
    }
    else {
        printf("\n a palavra nao e um palindromo");
    }

}