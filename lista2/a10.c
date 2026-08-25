#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    int d;
    printf("Digite um número de 1 a 7:");
    scanf("%d", &d);
    switch (d){
        case 1:
            printf("Domingo.");
            break;
        case 2:
            printf("Segunda.");
            break;
        case 3:
            printf("Terça.");
            break;
        case 4:
            printf("Quarta.");
            break;
        case 5:
            printf("Quinta.");
            break;
        case 6:
            printf("Sexta.");
            break;
        case 7:
            printf("Sábado.");
            break;
        default:
            printf("Não existe dia da semana correspondente");
            break;
    }
}