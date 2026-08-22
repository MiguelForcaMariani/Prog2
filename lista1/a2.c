#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(void){
    SetConsoleOutputCP(65001);
    int n;
    float a1, q, an;
    printf("Digite o primeiro termo:");
    scanf("%f", &a1);
    printf("Digite a razão:");
    scanf("%f", &q);
    printf("Digite o termo a ser encontrado:");
    scanf("%d", &n);
    an = a1*pow(q, n-1);
    printf("O termo é: %.2f", an);
}