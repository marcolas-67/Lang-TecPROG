#include <stdio.h>

void a1() {

    int numero;
    int i;

    printf("\nDigite 4 numeros inteiros:\n");

    for (i = 1; i <= 4; i++) {

        scanf("%d", &numero);

        if (numero % 2 != 0) {
            printf("%d e impar\n", numero);
        }

        if (numero % 5 == 0) {
            printf("%d e multiplo de 5\n", numero);
        }
    }
}

void b1() {

    int itens;
    int capacidade;
    int mochilas;

    printf("\nDigite a quantidade total de itens: ");
    scanf("%d", &itens);

    printf("Digite a capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    mochilas = itens / capacidade;

    printf("Numero de mochilas totalmente preenchidas: %d\n", mochilas);
}

void c1() {

    float valor;
    int codigo;

    printf("\nDigite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("Digite o codigo da unidade de medida: ");
    scanf("%d", &codigo);

    switch (codigo) {

        case 1:
            // coloque aqui a conversao da unidade 1
            printf("Resultado: %.2f\n", valor);
            break;

        case 2:
            // coloque aqui a conversao da unidade 2
            printf("Resultado: %.2f\n", valor);
            break;

        case 3:
            // coloque aqui a conversao da unidade 3
            printf("Resultado: %.2f\n", valor);
            break;

        default:
            printf("Unidade de medida inexistente!\n");
    }
}

void a2() {

    int numeros[5];
    int i;

    printf("\nDigite 5 numeros inteiros:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros impares:\n");

    for (i = 0; i < 5; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
        }
    }

    printf("\n\nNumeros consecutivos:\n");

    for (i = 0; i < 4; i++) {
        if (numeros[i + 1] == numeros[i] + 1) {
            printf("%d e %d sao consecutivos\n",
                   numeros[i], numeros[i + 1]);
        }
    }
}

void b2() {

    float peso;
    float altura;
    float imc;

    printf("\nDigite seu peso em kg: ");
    scanf("%f", &peso);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    }
    else if (imc < 25.0) {
        printf("Classificacao: Normal\n");
    }
    else if (imc < 30.0) {
        printf("Classificacao: Acima do peso\n");
    }
    else {
        printf("Classificacao: Obeso\n");
    }
}

void mover(int n, char origem, char destino, char auxiliar) {

    if (n == 1) {
        printf("Mover disco de %c para %c\n", origem, destino);
        return;
    }

    mover(n - 1, origem, auxiliar, destino);

    printf("Mover disco de %c para %c\n", origem, destino);

    mover(n - 1, auxiliar, destino, origem);
}


void c2() {

    int n;
    int movimentos;

    printf("\nDigite a quantidade de discos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade de discos invalida!\n");
        return;
    }

    movimentos = (1 << n) - 1;

    printf("\nQuantidade minima de movimentos: %d\n", movimentos);

    printf("\nMovimentos:\n");

    mover(n, 'A', 'C', 'B');
}

void a3() {
    int itens, capacidade;
    int mochilasCheias, sobra;

    printf("Quantidade de itens: ");
    scanf("%d", &itens);

    printf("Capacidade de cada mochila: ");
    scanf("%d", &capacidade);

    mochilasCheias = itens / capacidade;
    sobra = itens % capacidade;

    printf("Mochilas totalmente preenchidas: %d\n", mochilasCheias);
    printf("Itens que sobraram: %d\n", sobra);
}

void b3() {
    int a, b, c;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b || a == c || b == c) {
        printf("Os numeros tem que ser distintos.\n");
    } else if (a < b && b < c) {
        printf("%d %d %d\n", a, b, c);
    } else if (a < c && c < b) {
        printf("%d %d %d\n", a, c, b);
    } else if (b < a && a < c) {
        printf("%d %d %d\n", b, a, c);
    } else if (b < c && c < a) {
        printf("%d %d %d\n", b, c, a);
    } else if (c < a && a < b) {
        printf("%d %d %d\n", c, a, b);
    } else {
        printf("%d %d %d\n", c, b, a);
    }
}

void c3() {
    int a, b, codigo;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o codigo da operacao: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("%s\n", a > b ? "Verdadeiro" : "Falso");
            break;

        case 2:
            printf("%s\n", a < b ? "Verdadeiro" : "Falso");
            break;

        case 3:
            printf("%s\n", a == b ? "Verdadeiro" : "Falso");
            break;

        case 4:
            printf("%s\n", a != b ? "Verdadeiro" : "Falso");
            break;

        default:
            printf("operador invalido\n");
    }
}



int main() {

    int opcprova;
    int opcquestao1, opcquestao2, opcquestao3;

    printf("=== Provas das turmas AM, AN, B ===\n");
    printf("1 - AM\n");
    printf("2 - AN\n");
    printf("3 - B\n");
    printf("Escolha uma prova: ");
    scanf("%d", &opcprova);

    switch (opcprova) {

        case 1:
            printf("\n===== PROVA 1 AM =====\n");
            printf("Escolha a questao entre 1 e 3: ");
            scanf("%d", &opcquestao1);

            switch (opcquestao1) {

                case 1:
                    a1();
                    break;

                case 2:
                    b1();
                    break;

                case 3:
                    c1();
                    break;

                default:
                    printf("Questao invalida!");
            }

            break;


        case 2:
            printf("\n===== PROVA 2 AN =====\n");
            printf("Escolha a questao entre 1 e 3: ");
            scanf("%d", &opcquestao2);

            switch (opcquestao2) {

                case 1:
                    a2();
                    break;

                case 2:
                    b2();
                    break;

                case 3:
                    c2();
                    break;

                default:
                    printf("Questao invalida!");
            }

            break;


        case 3:
            printf("\n===== PROVA 3 B =====\n");
            printf("Escolha a questao entre 1 e 3: ");
            scanf("%d", &opcquestao3);

            switch (opcquestao3) {

                case 1:
                    a3();
                    break;

                case 2:
                    b3;
                    break;

                case 3:
                    ;
                    break;

                default:
                    printf("Questao invalida!");
            }

            break;


        default:
            printf("Prova invalida!");
    }

    return 0;
}

