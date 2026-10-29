#include <stdio.h> 

int main() {
    int a, b, passo;
    printf("Insira 3 valores: \n");
    scanf("%d %d %d", &a, &b, &passo);

    if(a < b){
        while(a < b){
            printf("|%d|", a);
            a += passo;

        }
    }else{
        while(b < a){
            printf("|%d|", a);
            a -= passo;
        }
    }
}