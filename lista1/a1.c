#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    int n;
    float a1, r, an;
    printf("Digite o primeiro termo:");
    scanf("%f", &a1);
    printf("Digite a razão:");
    scanf("%f", &r);
    printf("Digite o termo a ser encontrado:");
    scanf("%d", &n);
    an = a1+(n-1)*r;
    printf("O termo é: %.2f", an);
}