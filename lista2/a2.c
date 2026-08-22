#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(void){
    SetConsoleOutputCP(65001);
    float a;
    printf("Digite o número:");
    scanf("%f", &a);
    if(a>=0){
        printf("a raiz quadrada do número é: %.2f", sqrt(a));
    }else{
        printf("A potência de 2 do número é: %.2f", pow(a, 2));
    }
}