#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    float km, d, v;
    printf("Digite a quantidade de kms percorridos pelo carro:");
    scanf("%f", &km);
    printf("Digite a quantidade de dias pelos quais o carro foi alugado:");
    scanf("%f", &d);
    v = (km*0.15)+(d*60);
    printf("O valor total do aluguel é: %.2f", v);
}