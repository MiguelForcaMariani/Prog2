#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);
    float a, b, s;
    printf("Digite o valor do primeiro número:");
    scanf("%f", &a);
    printf("Digite o valor do segundo número:");
    scanf("%f", &b);
    s = a+b;
    if(s > 20){
        s = s+8;
    }else{
        s = s-5;
    };
    printf("O resultado final é: %.2f", s);
}