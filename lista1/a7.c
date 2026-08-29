#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float a, b, c;
    printf("Digite o valor da variável A:");
    scanf("%f", &a);
    printf("Digite o valor da variável B:");
    scanf("%f", &b);
    c = b;
    b = a;
    a = c;
    printf("Agora os valores são A: %.2f e B: %.2f", a, b);
}