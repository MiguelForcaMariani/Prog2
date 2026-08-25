#include <stdio.h>
#include <stdlib.h>
#include <windows.h> 

float valida(char num[9], float *n){
    do{
    printf("\nDigite o %s número: ", num);
    scanf("%f", n);
    if(isnan(*n)){
        printf("\nValor inválido, digite novamente");
    }
    }while(isnan(*n));
}

float multiplicar(float x, float y, float *r){
    for(int i = 1; i <= y; i++){
        *r += x;
    }
}

int main(void){
    SetConsoleOutputCP(65001);
    float x, y, r;
    char num[9];
    strcpy(num, "primeiro");
    valida(num, &x);
    strcpy(num, "segundo");
    valida(num, &y);
    multiplicar(x, y, &r);
    printf("O valor da multiplicação é %.2f", r);
return 0;
}