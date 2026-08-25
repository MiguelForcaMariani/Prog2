#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void main(){
    SetConsoleOutputCP(65001);
    float c, f;
    printf("Digite a temperatura em Cº:");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("A temperatura em farenheint é: %.2f", f);
}