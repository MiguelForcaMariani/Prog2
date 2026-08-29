#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int lerOpcao() {
    int op;
    printf("\n\nCALCULAR A ÁREA:\n");
    printf("1-Retângulo\n");
    printf("2-Círculo\n");
    printf("0-Sair\n");
    do{
    printf("\nInforme sua opção: ");
    scanf("%d", &op);
    if(isnan(op) || (op != 0 && op != 1 && op != 2)){
        printf("\nA opção selecionada é inválida.");
    }
    }while(isnan(op) || (op != 0 && op != 1 && op != 2));
    return op;
}

float inserir(float x, char y[]){
    do {
        printf("\nDigite o valor %s: ", y);
        scanf("%f", &x);
        if(isnan(x) || x < 0){
            printf("\nValor inválido.");
        }
    } while (isnan(x) || x < 0);
    return (x);
}

float retangulo(char info[]){
    float a, b, h;
    strcpy(info, "da base");
    b = inserir(b, info);
    strcpy(info, "da altura");
    h = inserir(h, info);
    a = b*h;
    return(a);
}

float circulo(char info[]){
    float a, r;
    strcpy(info, "do raio");
    r = inserir(r, info);
    a = M_PI*pow(r, 2);
    return(a);
}

int main(void){
    SetConsoleOutputCP(65001);
    int opcao;
    char info[10];
    do {
        opcao = lerOpcao();
        switch (opcao) {
        case 1:
            printf("\n\tÁREA DO RETÂNGULO\n");
            printf("O valor da área do retângulo é %.2f", retangulo(info));
        break;
        case 2:
            printf("\n\tÁREA DO CÍRCULO\n");
            printf("O valor da área do circulo é %.2f", circulo(info));
        break;
        }
    } while ( opcao > 0);
}