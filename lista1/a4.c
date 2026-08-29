#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float v, vf, d;
    printf("Digite o valor do produto:");
    scanf("%f", &v);
    printf("Digite a porcentagem do desconto:");
    scanf("%f", &d);
    d = d/100;
    d = (float) 1-d;
    vf = v*d;
    printf("O valor após o desconto é: %.2f", vf);
}