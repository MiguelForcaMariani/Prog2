#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    float v, vf;
    printf("Digite o valor do produto:");
    scanf("%f", &v);
    vf = v*0.91;
    printf("O valor após o desconto é: %.2f", vf);
}